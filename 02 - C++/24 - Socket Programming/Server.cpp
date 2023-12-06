#include <iostream>
#include <cstring>
#include <unistd.h>
#include <arpa/inet.h>
#include <string>
#include <algorithm>
//class for tcp server
class TCPServer
{
private:
    int serverSocket;
    int clientSocket;
    struct sockaddr_in serverAddr,clientAddr;

public:
    TCPServer(const int port)
    {
        //creating a socket
        //Domain = AF_INET : Address Family - IPV4
        //Type = SOCK_STREAM : Socket Type - TCP
        //Protocol = '0' : The operating system chooses the appropriate protocol for the given socket type.
        serverSocket = socket(AF_INET,SOCK_STREAM,0);
        if(serverSocket == -1)
        {
            std::cerr << "Error creating server socket\n";
            return;
        }

        //set up server address structure
        serverAddr.sin_family = AF_INET;
        serverAddr.sin_addr.s_addr = INADDR_ANY;
        serverAddr.sin_port = htons(port);

        //Binding socket to our server address and port
        if(bind(serverSocket,(struct sockaddr*)&serverAddr,sizeof(serverAddr)) == -1)
        {
            std::cerr << "Error binding server socket\n";
            close(serverSocket);
            return;
        }

        if(listen(serverSocket,5) == -1)
        {
            std::cerr << "Error listening for connections\n";
            close(serverSocket);
            return;
        }

        std::cout << "Server Listening on Port " << port << std::endl;


    }

    void acceptConnection()
    {
        socklen_t clientAddrLen = sizeof(clientAddr);
        //Accepting a connection from a client
        clientSocket = accept(serverSocket,(struct sockaddr*)&clientAddr, &clientAddrLen);
        if(clientSocket == -1)
        {
            std::cerr << "Error accepting connection\n";
            close(serverSocket);
            return;
        }
        std::cout << "Connection accepted from " << inet_ntoa(clientAddr.sin_addr) << std::endl;
        
        // std::string jsonResponse =  "HTTP/1.1 200 OK\r\n"
        //                             "Content-Type: application/json\r\n\r\n"
        //                             "{\"message\": \"Request received\", \"status\": \"success\"}";
        // sendMessage(jsonResponse);
        std::string jsonResponse = "{\"message\": \"Request received\", \"status\": \"success\"}";


        send_response(jsonResponse);

    }
    void send_response(const std::string& response) {
        // std::string http_response = "HTTP/1.1 200 OK\r\nContent-Length: " + std::to_string(response.length()) + "\r\n\r\n" + response;
        std::string http_response = "HTTP/1.1 200 OK\r\nContent-Type: application/json\r\nContent-Length: " + std::to_string(response.length()) + "\r\n\r\n" + response;
        send(clientSocket, http_response.c_str(), http_response.length(), 0);
    }

    void sendMessage(const std::string &message)
    {
        send(clientSocket,message.c_str(),message.size(),0);
    }

    void receiveMessage(std::string& buffer,int bufferSize)
    {
        char tempBuffer[bufferSize];
        //receive message from the connected client
        ssize_t bytesRead = recv(clientSocket,tempBuffer,bufferSize-1,0);
        if(bytesRead > 0)
        {
            tempBuffer[bytesRead] = '\0'; // Null-terminate the received data
            buffer = tempBuffer;
        }
    }

    void closeConnection() {
        // Close the connection and server socket
        close(clientSocket);
        close(serverSocket);
    }


};

int main()
{

    TCPServer server(3040);
    server.acceptConnection();
   
    while(true)
    {
        
        std::string buffer;

        server.receiveMessage(buffer,1024);

        std::cout << "Receiving message from client: " <<std::endl<< buffer << std::endl;

        if(buffer.find("open: calc") != std::string::npos)
        {
            std::cout << "-----------------------found calc command-----------------------" << std::endl;
            system("gnome-calculator &");

        }
        if(buffer.find("open: exp") != std::string::npos)
        {
            std::cout << "-----------------------found explorer command-----------------------" << std::endl;
            system("nautilus /home/joe/Desktop/Embedded-Linux/ &");
        }


        if(buffer.empty())
        {
            std::cout << "Client closed the connection\n";
            server.closeConnection();
            break;
        }
        
    }

    

    return 0;
}
#include <iostream>
#include <cstring>
#include <unistd.h>
#include <arpa/inet.h>
#include <string>
#include <stdio.h>
#include <stdlib.h>
class TCPClient {
private:
    int clientSocket;
    struct sockaddr_in serverAddr;

public:
    TCPClient(const std::string serverIP, int port) {
        // Create socket
        clientSocket = socket(AF_INET, SOCK_STREAM, 0);
        if (clientSocket == -1) {
            std::cerr << "Error creating client socket\n";
            return;
        }

        // Set up server address structure
        serverAddr.sin_family = AF_INET;
        serverAddr.sin_port = htons(port);
        inet_pton(AF_INET, serverIP.c_str(), &serverAddr.sin_addr);

        // Connect to the server
        if (connect(clientSocket, (struct sockaddr*)&serverAddr, sizeof(serverAddr)) == -1) {
            std::cerr << "Error connecting to the server\n";
            close(clientSocket);
            return;
        }

        // std::cout << "Connected to the server\n";
    }

    void sendMessage(const std::string& message) {
        // Send message to the server
        send(clientSocket, message.c_str(), message.size(), 0);
    }

    void receiveMessage(std::string& buffer, int bufferSize) {
        char tempBuffer[bufferSize];
        // Receive message from the server
        ssize_t bytesRead = recv(clientSocket, tempBuffer, bufferSize - 1, 0);
        if (bytesRead > 0) {
            tempBuffer[bytesRead] = '\0'; // Null-terminate the received data
            buffer = tempBuffer;
        }
    }

    void closeConnection() {
        // Close the client socket
        close(clientSocket);
    }
};

int main() {

    TCPClient client("127.0.0.1", 3040);
    std::string message;
    while (true) {
        
        std::cout << "Enter message (or 'exit' to quit): ";
        std::getline(std::cin, message);

        if (message == "exit") {
            break;
        }

        client.sendMessage(message);
        
    }

    

    return 0;
}

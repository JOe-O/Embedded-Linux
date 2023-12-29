#include <iostream>
#include <string>
#include <unistd.h>
#include <vector>
#include <sys/wait.h>
#include <sstream>

int main()
{
    std::string input;
    std::string command;
    std::vector<std::string> vecInput;
    
    while(1)
    {
        std::cout << "JOeBash$ ";
        std::getline(std::cin, input);
        
        
        if(input == "")
        {
            continue;
        }

        if(input == "exit" || input == "quit")
        {
            std::cout << "Exiting Program...\n";
            return 0;
        }

        pid_t child_pid;

        child_pid = fork(); // fork creates a new process as a child 

        if(child_pid < 0)
        {
            //Error occurent during fork
            std::cerr << "Fork Operation Failed";
            return 0;
        }
        else if(child_pid == 0)
        {
            //Executing child proccess
            // std::cout << "Child Proccess PID: " << getpid() << " Parent PID: " << getppid() << std::endl;

            std::string tempInput;
            std::stringstream ss(input);
            while(ss >> tempInput)
            {
                vecInput.push_back(tempInput);
            }

            command = vecInput.at(0);

            std::vector<char *> argv;

            for(const auto & arg : vecInput)
            {
                argv.push_back(const_cast<char *>(arg.c_str()));
            }

            execvp(command.c_str(),argv.data());
            perror("Execution Failed");
            exit(EXIT_FAILURE);
        }
        else
        {
            //Executing Parent Process
            // std::cout << "Parent Process PID: " << getppid() << " Child PID: " << child_pid << " PID: " << getpid() << std::endl;
            int status;
            waitpid(child_pid,&status,0);

            //std::cout << "child process finished" << std::endl;
        }

    
    
    }
    
    
    
    
    return 0;
}
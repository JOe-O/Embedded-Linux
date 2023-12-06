/*
 * Program to handle Ctrl + C interrupts
 */

#include <iostream>
#include <signal.h>
#include <unistd.h>

// Function to handle the Ctrl + C interrupt signal
void signalCatcher(int signum)
{
    // Print a message indicating that the program is exiting due to the interrupt
    std::cout << std::endl << "----------------------Exiting Program----------------------" << std::endl << std::endl;

    // Terminate the program with the received signal number
    exit(signum);
}

int main()
{
    // Set up a signal handler for the Ctrl + C interrupt
    signal(SIGINT, signalCatcher);

    // Infinite loop to simulate the program's ongoing operation
    while (true)
    {
        // Print a message indicating that the program is still running
        std::cout << "Still Running......" << std::endl;

        // Sleep for 1 second to control the loop execution speed
        sleep(1);
    }

    // The program should never reach this point, as it is terminated by the signal handler
    return 0;
}

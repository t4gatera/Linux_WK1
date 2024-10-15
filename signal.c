#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>

// Signal handler function
void handle_sigint(int sig) {
    printf("Caught signal %d (SIGINT). Exiting...\n", sig);
    exit(0);  // Exit the program
}

int main() {
    // Register signal handler
    signal(SIGINT, handle_sigint);

    // Infinite loop to keep the program running
    while (1) {
        printf("Running... (Press Ctrl+C to stop)\n");
        sleep(1);  // Sleep for two second
    }

    return 0;
}


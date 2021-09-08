#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
    printf("\n\tRunning ps command with execlp\n\n");
    /*
     * execlp same as exec, replace memory of the caller process.
     * In other words, exec replace the current image for a new image.
     *
     * ps will return a snapshot of the processes.
     * -ax all processes
     */
    execlp("ps", "ps", "-ax", NULL);
    /*
     * exec overwritten program with ps.
     * So, after execlp nothing of our code will be running.
     * Think of it in a way that our program started, stayed, and 
     * then exec comes in, starts a new image, and the entire program is forgotten.
    */
    printf("Done.\n");

    exit(0);
}
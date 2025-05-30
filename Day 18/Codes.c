// 01.) sleep(), exit()

#include <stdio.h>
#include <stdlib.h> // For exit()
#include <unistd.h> // For sleep()
#include <sys/wait.h> // For wait()

int main() {

    printf("Program started.\n");

    printf("Sleeping for 3 seconds...\n");
    sleep(3);

    printf("Exiting the program.\n");
    exit(0);
}

// 02.)

#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include <stdlib.h>

int main() {

    pid_t pid;

    printf("Parent Process started. PID: %d\n", getpid());

    pid = fork(); 

    if (pid < 0) {
        perror("Fork Failed");
        exit(1);
    }

    if (pid == 0) {
        printf("Child process. PID: %d, sleeping for 2 seconds...\n", getpid());
        sleep(2);
        printf("Child process exiting.\n");
        exit(0);
    }
    else {
        int status;
        printf("Parent waiting for child to finish...\n");
        wait(&status);

        if (WIFEXITED(status)) {
            printf("Child exited with status: %d\n", WEXITSTATUS(status));
        }
        else {
            printf("Child did not exit normally.\n");
        }
        printf("Parent process ending.\n");
    }


    return 0;
}


// 03.) 
// Exercise 01 ->
// First Child: Slept for 1 second.
// Second Child: Slept for 3 seconds.
// Parent: Both children have finished.

#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include <stdlib.h>

int main() {

    pid_t pid1, pid2;
    printf("Parent waiting for child to finish...\n");

    pid1 = fork();
    if (pid1 < 0) {
        perror("Fork Failed..!");
        exit(1);
    }

    if (pid1 == 0) {
        printf("I am a child process. \nMy Parent ID: %d. \nSpeeping for 1 second...\n",getppid());
        sleep(1);
        printf("Child 1 Exiting...\n");
        printf("\n");
        exit(0);
    } else {
        wait(NULL);
        pid2 = fork();
        if (pid2 < 0) {
            perror("Fork failed..!");
            exit(1);
        }

        if (pid2 == 0) {
            printf("I am a sibiling. \nMy Parent ID: %d. \nSleeping for 3 seconds...\n", getppid());
            sleep(3);
            printf("Child 2 Exiting...\n");
            printf("\n");
            exit(0);
        }
        else {
            int status;
            
            for (int a = 0; a < 2; a++) {
                wait(&status);

                if (WIFEXITED(status)) {
                    printf("Child exited with status: %d\n", WEXITSTATUS(status));
                }
                else {
                    printf("Child did not exit normally.\n");
                }
            }
            
            printf("Parent process ending.\n");
        }
    }

    return 0;
}

// 04.)
// Exercise 02 -> 
// First child: Sleeps for 2 seconds, exit with status 2.
// Second child: Sleeps for 1 second, exit with status 1.
// Parent: Waits twice, and print which child(by PID or exit code) dinished first and second.

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main() {
    pid_t child1, child2, wpid;
    int status;

    child1 = fork();
    if (child1 == 0) {
        sleep(2);
        exit(2);
    }

    child2 = fork();
    if (child2 == 0) {
        sleep(1);
        exit(1);
    }

    for (int i = 0; i < 2; i++) {
        wpid = wait(&status);
        printf("Child with PID %d exited with status %d\n", wpid, WEXITSTATUS(status));
    }

    return 0;
}

// Exercise 03 -> 
// The parent creates a child process.
// The child creates a grandchild process.
// The grandchild sleeps 2 seconds and exits with status 2.
// The child waits for the grandchild, prints its exit status, then the exits with status 55.

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main() {
    pid_t child, grandchild;
    int status;

    child = fork();
    if (child == 0) {
        grandchild = fork();
        if (grandchild == 0) {
            sleep(2);
            exit(2);
        } else {
            wait(&status);
            printf("Grandchild exited with status %d\n", WEXITSTATUS(status));
            exit(55);
        }
    } else {
        wait(&status); 
        printf("Child exited with status %d\n", WEXITSTATUS(status));
    }

    return 0;
}
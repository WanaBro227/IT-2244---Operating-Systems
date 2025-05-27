// 01.) 
// Parent process and child process
// Fork is coping the code and runs it againg.
// Child process id (pid) is always 0;

#include <stdio.h>
#include <unistd.h>

int main() {

    printf("\nHello World");

    int f = fork();
    int p = getpid();

    printf("\nThe pid is %d", p);
    printf("\nThe fork is %d\n", f);

    if (f == 0) {
        printf("\nI am the child process and my id is:\n");
        printf("pid: %d\n", p);
        printf("fork: %d\n", f);
    }
    else {
        printf("\nI am the parent process and my id is:\n");
        printf("pid: %d\n", p);
        printf("fork: %d\n", f);
    }

    return 0;
}
___________________________________________________________________________

// 02.)
// Using fork() multiple times.

#include <stdio.h>
#include <unistd.h>

int main() {

    fork(); // This fork is copying the process without this line and
    fork(); // it includes this fork. So Hello World is printed 4 times
    printf("Hello world!\n");

    return 0;
}
___________________________________________________________________________

// 03.)
// Create two child process from the parent process

#include <stdio.h>
#include <unistd.h>

int main() {

    int f1 = fork();

    if (f1 == 0) {
        printf("I am the first child process B.\n");
        printf("My Process id is: %d\n", getpid()); // getpid() = Process ID
        printf("My Parent id is: %d\n\n", getppid()); // getppid() = Parent ID
    }
    else {
        int f2 = fork();

        if (f2 == 0) {
            printf("I am the second child process C.\n");
            printf("My Precess id is: %d\n", getpid()); // getpid() = Process ID
            printf("My Parent id is: %d\n\n", getpid()); // getppid() = Parent ID
        }
        else {
            printf("I am the parent process A.\n");
            printf("My Process id is: %d\n", getpid()); // getpid() = Process ID
            printf("My Parent id is: %d\n\n", getppid()); // getppid() = Parent ID
        }
    }

    return 0;
}
___________________________________________________________________________
// 03.01.)

#include <stdio.h>
#include <unistd.h>

int main() {

    int f1 = fork();
    int f2 = fork();

    if (f1 == 0) {
        printf("I am the first child process B.\n");
    }

    if (f2 == 0) {
        printf("I am the second child process C.\n");
    }

    if (f1 != 0 && f2 != 0) {
        printf("I am the parent process A.\n");

    }

    return 0;
}
___________________________________________________________________________

#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main() {
    pid_t pid1, pid2;

   
    pid_t parent_pid = getpid();
    printf("I am parent, my PID = %d\n", parent_pid);

    pid1 = fork(); 

    if (pid1 == 0) {
       printf("I am child, my PID = %d, my parent PID = %d\n", getpid(), getppid());
    } else {        
        pid2 = fork(); 
        if (pid2 == 0) {
        printf("I am csibling, my PID = %d, my parent PID = %d\n", getpid(), getppid());
        }
    }

    return 0;
}

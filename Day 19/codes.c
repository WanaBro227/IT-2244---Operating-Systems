// Sender

#include <stdio.h>
#include <sys/ipc.h>
#include <sys/msg.h>
#define MAX 100

// Structure for message queue
struct msg_buffer{
    long msg_type;
    char msg_text[300];
}message;

int main() {

    key_t key;
    int msgid;

    // ftok() to generate unique key
    key = ftok("progfile", 65);

    // msgget cretaes a message queue and returns identifier
    msgid = msgget(key,0666 | IPC_CREAT);
    message.msg_type = 1;
    printf("Write data: ");
    fgets(message.msg_text,MAX,stdin);

    // msgsnd to send message
    msgsnd(msgid, &message, sizeof(message), 0);

    // display message
    printf("Data send is: %s \n", message.msg_text);

    return 0;
}

// Receicve

#include <stdio.h>
#include <sys/ipc.h>
#include <sys/msg.h>

struct msg_buffer {
    long msg_type;
    char msg_text[300];
} message;

int main() {

    key_t key;
    int msgid;

    // ftok to generate unique key
    key = ftok("progfile", 65);

    // msgget creates a message queue and returns identifier
    msgid = msgget(key,0666 | IPC_CREAT);

    // msgrcv to receive a message
    msgrcv(msgid,&message,sizeof(message),1,0);
    // display the message
    printf("Data received is : %s \n",message.msg_text);
    // to destroy the message queue
    msgctl(msgid, IPC_RMID, NULL);

    return 0;
}
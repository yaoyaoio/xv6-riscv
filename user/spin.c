#include "kernel/types.h"
#include "user/user.h"

int 
main(int argc, char *argv[])
{
    int pid;
    char c;
    pid = fork();
    if (pid == 0){
        c = '/';
    }else {
        printf("parent pid is %d, child is %d\n, getpid()",pid);
        c = '\\';
    }

    for (int i = 0; ; i++){
        if ((i % 1000000) == 0 )
            write(2,&c,1);
    }   
    exit(0);
}
#include "types.h"
#include "stat.h"
#include "user.h"


int 
main(void){
    int pid = fork();
    if (pid==0)
    {
        fork();
        fork();
        fork();
        int id = getpid();
        int *ptr ;
        ptr = malloc(10000 * id);
        ptr++;
        while(1)
        {

        }

    }
    else
    {
        sleep(2);
    }
    exit();
}
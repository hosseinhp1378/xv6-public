#include "types.h"
#include "stat.h"
#include "user.h"
#include "fs.h"

int main (int argc,char *argv[])
{

 int pid,q;
 pid = fork ();
 if (pid<0)
 {
     /* error */
 }
 
 else if (pid == 0)
   {	
    printf(1, "child is   %d \n",getpid()); 
    
        for (int i = 0; i < 100; i++)
        {
        printf(1, "1\n"); 

        }
    }
  else
 {
    int pid2 =fork();
    if (pid2<0)
    {
        /* error */
    }
    
    else if (pid2 == 0)
    {	fork();
        fork();
        fork();
        //if we dont use this sys call at the end , first child should finish its task in end the wait
        //but with this syscall priority is whit other childern and first child wont end wait
        set_priority(getpid()*2);
     
       int x=0;
        for (int i = 0; i < 200; i++)
        {
            x+=x;
                    printf(1, "2\n"); 

        }
       
    }
    else
    {
        printf(1, "parent is   %d \n",getpid()); 
         q=wait();         
         printf(1, "procces  %d finish first \n",q); 

    }  
 } 
 
 exit();
}

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
       //if we remove nice syscall then this child will finish first
           printf(1, "child is  %d  \n",getpid()); 
       int a1=nice();
       	
    printf(1, "child is  %d nice1 %d \n",getpid(),a1); 

    
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
        

     
       int x=0;
        for (int i = 0; i < 300; i++)
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

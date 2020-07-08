#include "types.h"
#include "stat.h"
#include "user.h"

int main (int argc,char *argv[])
{

 
 int wtime,rtime;	
 int rc = fork ();
 if (rc<0)
 {
     /* error */
 }
 
 if (rc == 0)
   {	
    //child
    //change this for and see the result
   for (int i = 0; i < 1000; i++)
   {
       printf(1,"@");
   }
   
    }
  else
 {
     //parent 
     // delete this for and see the result
     for (int i = 0; i < 100; i++)
   {
       printf(1,"#");
   }

    waitx(&wtime,&rtime);
     printf(1, "\n\n\n\n\n\n wait time = %d and run time = %d \n " , wtime,rtime); 

 }  
 exit();
}

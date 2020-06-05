#include "types.h"
#include "stat.h"
#include "user.h"


int 
main(void){
    struct proc_info *infoArray ;
    infoArray = malloc(100 * sizeof(p_info));
    
    info(infoArray);
    for (int i=0 ;i<=15 ;i++){
        if ((infoArray + i)->pid == 0 && (infoArray + i)->memsize == 0)
            break ;
        printf(1,"%d  pid =  %d  va size = %d\n",i,(infoArray + i)->pid,(infoArray + i)->memsize);
    }
    exit();
}
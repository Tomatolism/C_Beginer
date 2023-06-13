
#include <stdio.h>

int main()
{
    int i;
    int list[]={1,2,3,4,5,6,7,8,9,10};
    int size = sizeof(list)/sizeof(list[0]);
    
    for (i=0;i<size;i++){
        printf("%d, ",list[i]);
    }
    printf("\n"); 
     
    for (i=size-1;i>=0;i--){
        printf("%d, ",list[i]);
    }     
 
    return 0;
}

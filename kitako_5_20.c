
#include <stdio.h>

int main()
{
    int Total_N=0, SUM=0,buf;
    
    printf("Enter Integer;\n");
    while(1){
       scanf("%d",&buf);
       if (buf==0){
           break;
       }
       SUM +=buf;
       Total_N++;
    }
    
    if (Total_N!=0){
        printf("The average: %d, ",SUM/Total_N);
    }
    

    return 0;
}

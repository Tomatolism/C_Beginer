
#include <stdio.h>

int main(void){
    int i, buf, max;
    for (i=1; i<=10; i++){
       
        printf("Enter an integer: ");
        scanf("%d",&buf);
        if (max < buf){
            max = buf;
        }
    }
    printf("The max number is %d  ",max);
    return 0;

}

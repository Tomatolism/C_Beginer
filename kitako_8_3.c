
#include <stdio.h>

int main()
{
    int str[10],i;
    int* p;
    p = str;
    
    for (i=0; i<10; i++){
        scanf("%d",&str[i]);
    }
    
    for (i=0; i<10; i++){
        printf("%d, ",*(p+i));
    }
    
    printf("\n");
    
    for (i=9; i>=0; i--){
        printf("%d, ",*(p+i));
    }
    
    return 0;
}

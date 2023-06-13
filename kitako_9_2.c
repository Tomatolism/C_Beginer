
#include <stdio.h>

int mean(int a, int b){
    return (a+b)/2;
}

int main()
{
    int a = 4;
    int b = 6;
    
    printf("Average of %d and %d is %d",a, b, mean(a,b));
    return 0;
}

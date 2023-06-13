
#include <stdio.h>

void Triangle(int size){
    int i,j;
    for (i=1; i<=size; i++){
        for (j=1; j<=i; j++){
            printf("$");
        }
        printf("\n");
    }
    printf("\n");
}

int main()
{
    Triangle(3);
    Triangle(4);
    Triangle(5);
    return 0;
}

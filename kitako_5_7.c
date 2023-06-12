
#include <stdio.h>

int main(void){
    int i, product=1;
    for (i=1; i<=7; i++){
        product *= i;
        printf("%d  ",product);
    }
    return 0;

}

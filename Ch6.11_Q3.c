// Expect Result Practice
// out1:3

#include <stdio.h>

int main(void){
    int array[5] = {1,2,3,4,5};
    int* p = &array[0];

    p += 2;
    printf("out1 :%d\n",*p);
    
    return 0;
}

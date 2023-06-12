// Predict output Practice
// 1 5 10 ? 1   : 3[p] is equal to p[3]
// 1 5 10 ? 1
// 11
// 12
// 5
#include <stdio.h>

int main(void){
    int array[5] = { 1, 5, 10, 15, 20 };
    int* p;
    
    p = &array[0];
    
    printf("%d %d %d %d %d\n",*(p+0), *(p+1), p[2], 3[p], *p );
    p = array;
    printf("%d %d %d %d %d\n",*(p+0), *(p+1), p[2], 3[p], *p );
    
    *p += 10;
    printf("p[0] : %d\n",p[0]);
    
    (*p)++;
    printf("*p : %d\n",*p);

    *(p++);
    printf("*p : %d\n",*p);
    
}

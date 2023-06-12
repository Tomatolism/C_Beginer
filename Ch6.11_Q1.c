// Expect Result Practice
// out1:30
// out2:30
#include <stdio.h>

int main(void){
    int hoge = 30;
    int* piyo =&hoge;
    
    printf("out1 :%d\n",hoge);
    printf("out2 :%d\n",*piyo);
}

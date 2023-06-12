// Expect Result Practice
// out1:20(wrong)  correct:10  因為改的pointer，原本x的儲存位置和內容沒有改變。
// out2:20
#include <stdio.h>

int main(void){
    int x = 10;
    int y = 20;
    int* hoge = &x;
    int* piyo = &y;
    int* tmp;
    
    tmp = hoge;
    hoge = piyo;
    piyo = tmp;
    
    printf("out1 :%d\n",x);
    printf("out2 :%d\n",*hoge);
    
    return 0;
}

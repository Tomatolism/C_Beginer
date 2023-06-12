
// Predict output Practice
// hoge = 10
// &hoge= hoge_address
// *i= 10
// &i= i_address
// &j = j_address
// *j = hoge_address
// **j= 10
// k = j_address
// *k = i_address
// **k = hoge_address
// ***k = 10
#include <stdio.h>

int main(void){
    int hoge = 10;
    int* i = &hoge;
    int** j = &i;
    int*** k = &j;
    printf("hoge = %d\n", hoge);
    printf("&hoge=  %p\n", &hoge);
    printf("*i= %d\n", *i);
    printf("&i= %p\n", &i);
    printf("&j= %p\n", &j);
    printf("*j= %p\n", *j);
    printf("**j= %d\n", **j);
    printf("k= %p\n", k);
    printf("*k= %p\n", *k);
    printf("**k= %p\n", **k);
    printf("***k= %d\n", ***k);
    return 0;

}

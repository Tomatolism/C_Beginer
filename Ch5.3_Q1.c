
// Expect Result Practice
// 3
// 10
// 3

#include <stdio.h>
int num = 10;

void func(int number){
    printf("NUM = %d \n",num);
    number = 20;
}

int main()
{
    int num = 3;
    printf("NUM = %d \n",num);
    func(num);
    printf("NUM = %d \n",num);
    return 0;
}

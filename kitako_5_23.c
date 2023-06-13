
#include <stdio.h>

int main()
{
    int value, pre=1, prepre=0;
    printf("%d, ",prepre);
    printf("%d, ",pre);
    do{
        value = pre + prepre;
        prepre = pre;
        pre = value;
        printf("%d, ",value);
        
    }while(value<100);

    return 0;
}

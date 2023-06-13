
#include <stdio.h>

int main()
{
    char str[] = "hello world";
    char* p;
    p = str;
    
    *p = 'H';
    *(p+6) = 'W';
    
    printf("%s",str);
    return 0;
}

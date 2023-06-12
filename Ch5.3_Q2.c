// Expect Result Practice
// 31   
// the define will expand directly
#include <stdio.h>

# define TIMES( x, y) (x * y)
int main()
{
    int num;
    
    num = TIMES(3 + 5, 5+ 3);
    printf("%d \n", num);

    return 0;
}

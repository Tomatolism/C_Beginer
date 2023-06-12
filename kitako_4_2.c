
#include <stdio.h>

int main()
{
    int x, y;
    printf("Enter two integer number:");
    scanf("%d %d",&x, &y);
    
    if (x>y){
        printf("%d is bigger than %d\n", x,y);
    }else if (x<y){
        printf("%d is bigger than %d\n", y,x);
    }else{
        printf("you enter the same number");
    }
    
    return 0;
}

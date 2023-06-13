
#include <stdio.h>

struct Rainfall{
    char month[10];
    int amount;
};

int main()
{
    struct Rainfall Record[]={
        {"1月", 49},
        {"2月", 60},
        {"3月", 115},
        {"4月", 130}
    };
    
    int i;
    
    for (i=0; i<4; i++){
        printf("%s   %d mm \n", Record[i].month, Record[i].amount);
    }
    
    
}

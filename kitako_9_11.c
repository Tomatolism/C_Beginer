
#include <stdio.h>

int Fibonacci(int i){
    if (i==0){
        return 0;
    }else if (i ==1){
        return 1;
    }else{
        return Fibonacci(i-1) + Fibonacci(i-2);
    }

}

int main()
{
    int i;
    
    for (i=0; i<20; i++){
        printf("F(%d) = %d \n", i, Fibonacci(i));
    }
    return 0;
}

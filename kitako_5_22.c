
#include <stdio.h>
void Plot_One_line(int N_x, int first_X, int space){
    int i;
    for (i=0; i<first_X; i++){
        printf(" ");
    }
    printf("X");
    
    if (N_x > 1){
        for (i=0; i<space; i++){
            printf(" ");        
        }     
        printf("X");
    }
    printf("\n");
}
void Plot_Cross(int size){
    int N_x =2, flag=0, i=size, start=0, space;
    
    space = size -2;
    while(start>=0){
        
        if(space==-1){
            Plot_One_line(1, start, space);
            flag = 1;
        }else{
            if (space ==0){
                Plot_One_line(N_x, start, space);
                flag = 1;
            }
            Plot_One_line(N_x, start, space);
        }
        
        
        if(flag ==0){
            start++;
            space-=2;
        }else{
            start--;
            space+=2;
        }
    }

}

int main(void){
    
    printf("=====   size 3  =====\n");
    Plot_Cross(3);
    printf("=====   size 4  =====\n");
    Plot_Cross(4);
    printf("=====   size 5  =====\n");
    Plot_Cross(5);
    printf("=====   size 6  =====\n");
    Plot_Cross(6);
    printf("=====   size 7  =====\n");
    Plot_Cross(7);
    

}

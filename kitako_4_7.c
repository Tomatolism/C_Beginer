
#include <stdio.h>

void Evalue(int score, int evalue_case){
    printf("Selected Case: %d, The Score: %d  -> ", evalue_case, score);
    
    switch(evalue_case){
        case 1:
            if (score >= 60){
                printf("合格\n");
            }else{
                printf("不合格\n");
            }
            break;
            
        case 2:
            if (score >= 80){
                printf("たいへんよくできました。\n");
            }else if(score >= 60){
                printf("よくできました。\n");
            }else{
                printf("ざんねんでした。\n");
            }
            break;
        case 3:
            if (score >= 80){
                printf("優\n");
            }else if(score >= 70){
                printf("良\n");
            }else if(score >= 60){
                printf("可\n");
            }else{
                printf("不可\n");
            }        
            break;
    }    
}

int main()
{
    Evalue(85,1);
    Evalue(75,1);
    Evalue(65,1);
    Evalue(55,1);
    Evalue(85,2);
    Evalue(75,2);
    Evalue(65,2);
    Evalue(55,2);
    Evalue(85,3);
    Evalue(75,3);
    Evalue(65,3);
    Evalue(55,3);
    
    return 0;
}

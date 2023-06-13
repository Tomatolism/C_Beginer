
#include <stdio.h>

void Sort(int* list, int len){
    int i,j, buf;
    
    for (i=0; i<len; i++){
        for (j=i; j <len; j++){
            if (list[j]<list[i]){
                buf = list[i];
                list[i] =list[j];
                list[j] = buf;
            }
        }
    }

}

int main()
{
    int list[] = {5,16,71,4,1,6};
    int len = 6;
    int i;
    
    Sort(list, len);
    for (i=0; i<len; i++){
        printf("%d ",list[i]);
    }
    
    return 0;
}

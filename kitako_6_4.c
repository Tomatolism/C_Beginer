int main()
{
    int value[100],sum, count=0, i;
    int size;
    printf("Enter Numbers:\n");
    
    while(1){
        if (sum>100 || count==100){
            break;
        }
        scanf("%d", &value[count]);
        sum += value[count];
        count+=1;
    }
    
    for (i=0;i<count;i++){
        printf("%d, ",value[i]);
    }

    return 0;
}

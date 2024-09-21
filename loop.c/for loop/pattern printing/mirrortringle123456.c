#include<stdio.h>
int main(){
    int num;
    printf("Enter your num :");
    scanf("%d",&num);
    int count=1;
    int j=1;
    for(;num>0;num--){
        for(int j=num-1;j>0;j--){
            printf(" ");
        }
        int stop=1;
        for(;j>0;j--,stop++,count++){
            printf("%d",count);
        }
        j=stop;
        printf("\n");

    }
}   




#include<stdio.h>
int main(){
    int num;
    printf("Enter your num");
    scanf("%d",&num);
    int j=1;
    int count2=1;
    while(num>0){
        int space=num-1;
        while(space>0){
            printf(" ");
            space--;
        }
        int stop=1;
        while(count2>0){
            printf("%d",j);
            stop++;
            count2--;
            j++;
        }
        count2=stop;
        printf("\n");
        num--;
    }
    return 0;

}
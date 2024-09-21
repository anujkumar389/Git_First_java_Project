#include<stdio.h>
int main(){
    int n;
    int max=0;
    int min;
    int sum=0;
    printf("Enter your 10 num :\n");
    for(int i=1;i<=10;i++){
        scanf("%d",&n);
        if(i==1){
            min=n;
        }
        if(n>max){
            max=n;
        }
        if(n<min){
            min=n;
        }
        sum+=n;
    }
    printf("Maximum num : %d\n",max);
    printf("Minimum num : %d\n",min);
    printf("Average num : %0.2f\n",sum/10.0);
    return 0;
}

#include<stdio.h>
int armstrong(int num){
    int count=0;
    for(int i=num;i>0;i/=10){
        count++;
    }
    int sum=0;
    for(int j=num;j>0;j/=10){
        int r=j%10;
        int power=1;
        for(int k=1;k<=count;k++){
            power*=r; 
        }
        sum+=power;
    }
    if(sum==num){
        printf("Yes");
    }else{
        printf("no");
    }
    return 0;
}
int main(){
    int n;
    printf("Enter no :");
    scanf("%d",&n);
    armstrong(n);
    return 0;
}
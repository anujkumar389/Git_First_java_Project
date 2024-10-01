#include<stdio.h>
int count(int b){
    int count=0;
    for(;b>0;b=b/10){
        count++;
    }
    return count;
}
int sum(int a){
    int c=count(a);
    if(c==1){
        printf("%d",a);
        return 0;
    }else{
        int sum2=0;
        for(int i=a;i>0;i=i/10){
            int r=i%10;
            sum2=sum2+r;
        }
        sum(sum2);
    }
}
int main(){
    int a;
    printf("Enter no :");
    scanf("%d",&a);
    sum(a);
}
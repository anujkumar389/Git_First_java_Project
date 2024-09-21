#include<stdio.h>
int main(){
    int n;
    printf("Enter your no ");
    scanf("%d",&n);
    int c=0;
    int sum=0;
    for(int i=n;i>0;i=i/10,c++){
        int r=i%10;
        int m=1;
        for(int j=c;j>0;j--){
            m=m*2;
        }
        sum=sum+r*m;
    }
    printf("%d",sum);
}
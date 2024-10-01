#include<stdio.h>
void febonaci(int range1,int range2){
    int a=0;
    int b=1;
    int c=a+b;
    for(;c<=range2;c=a+b){
        if(c>=range1&&c<=range2){
            printf("%d,",c);
        }
        a=b;
        b=c;
    }
}
int main(){
    int a;
    printf("Enter your 1st no :");
    scanf("%d",&a);
    int b;
    printf("Enter your 2nd no :");
    scanf("%d",&b);
    febonaci(a,b);
    return 0;
}
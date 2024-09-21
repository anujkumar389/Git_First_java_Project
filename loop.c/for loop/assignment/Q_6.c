#include<stdio.h>
int main(){
    int n1;
    printf("Enter your range 1 :");
    scanf("%d",&n1);
    int n2;
    printf("Enter your range 2 :");
    scanf("%d",&n2);

    int a=0;
    int b=1;
    int c=a+b;
    int a2;
    for(;c<n1;c=a+b){
        if(c>=n1&&c<=n2){
        printf("%d\n",c);
        }
        a=b;
        b=c;
        a2=c;
    }
    // a=a2;
    // b=n1;
    // c=a+b;
    // for(;c<=n2;c=a+b){
    //     printf("%d,",c);
    //     a=b;
    //     b=c;
    // }

 return 0;
}
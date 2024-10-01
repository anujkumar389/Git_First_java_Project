#include<stdio.h>
void prime(int a){
    int check=1;
    for(int i=2;i<a;i++){
        if(a%i==0){
            check=0;
            break;
        }
    }if(check==1){
        printf("%d is prime",a);
    }else{
        printf("%d is not prime",a);
    }
}
int main(){
    int a;
    printf("Enter your no :");
    scanf("%d",&a);
    prime(a);

    return 0;
}
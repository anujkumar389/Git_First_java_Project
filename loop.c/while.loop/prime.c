#include<stdio.h>
int main(){
    int a;
    printf("Enter your no:");
    scanf("%d",&a);
    int b=2;
    int check=0;
    while(b<a && check==0){
        if (a%b==0 && a!=2)
        {
            check=1;
        }
        b++;
    }
    if(check){
     printf("%d is not prime no",a);
    }else{ 
        //if(check==0){
        printf("%d is prime no",a);
        //}
    }
    return 0;
}
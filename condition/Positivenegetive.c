#include<stdio.h>
int main(){
    int a;
    printf("enter your number :");
    scanf("%d",&a);
    if (a>0)
    {
        printf("%d is a positive number",a);
    }else if (a<0)
    {
        printf("%d is a negetive number",a);
    }
     if (!(a>0 && a<0))
        {printf("%d is nither positive or nor negetive",a);
    }return 0;
}
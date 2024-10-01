#include<stdio.h>
int main(){
    int a;
    int b;
    int c;
    printf("a=");
    scanf("%d",&a);
    printf("b=");
    scanf("%d",&b);
    printf("c=");
    scanf("%d",&c);
if (a>b)
{
    if (a>c)
    {
        printf("%d is maximum",a);
    }else if(c>b)
    {
        printf("%d is maxima",c);
    }
    
}else {
 if (b>a)
    {
        if (b>c)
        {
            printf("%d is maxima",b);
        }else {
            printf("%d is max",c);
        }
            
    }
        
        
    }
    
return 0;
}
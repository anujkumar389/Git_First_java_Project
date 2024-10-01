#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter your 1st no:\n");
    scanf("%d",&a);
    printf("enter your 2nd no:");
    scanf("%d",&b);
    printf("enter your 3rd no:");
    scanf("%d",&c);
   (a>b&&a>c)?printf("%d is max1\n",a):b>a&&b>c?printf("%d is max2\n",b):printf("%d is max3\n",c);
    
    return 0;

}
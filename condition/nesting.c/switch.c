#include<stdio.h>
int main(){
    int a;
    printf("enter your week no");
    scanf("%d",&a);
    switch (a)
    {
    case 1:
        printf("SUNDAY");
        break;
    case 2:
        printf("MONDAY");
        break;
    case 3:
        printf("TUESDAY");
        break;
    case 4:
        printf("WEDNESDAY");
        break;
    case 5:
        printf("thrusday");
        break;
    case 6:
        printf("FRIDAY");
        break;
    case 7:
        printf("SATURDAY");
        break;
    
    default:
        break;
    }
 return 0;
 
}
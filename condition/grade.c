#include<stdio.h>
int main(){
    int a;
    int b;
    int c;
    int d;
    int e;
    printf("enter your physics marks :");
    scanf("%d",&a);
    printf("enter your chemistry marks :");
    scanf("%d",&b);
    printf("enter your biology marks :");
    scanf("%d",&c);
    printf("enter your mathematics marks :");
    scanf("%d",&d);
    printf("enter your computer marks :");
    scanf("%d",&e);
    int sum=a+b+c+d+e;
    int percentage=(sum*100)/500;
    printf("%d\n",sum);

    if (percentage>=90)
    {
    printf("Grade A");
    }else if (percentage>=80 && percentage<90)
    {
        printf("Grade B");
    }else if (percentage>=70 && percentage<80)
    {
        printf("Grade C");
    }else if (percentage>=60 && percentage<70)
    {
        printf("Grade D");
    }else if (percentage>=40 && percentage<60)
    {
        printf("Grade E");
    }else if (percentage<40)
    {
        printf("Grade F");
    }return 0;
}
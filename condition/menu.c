#include<stdio.h>
int main(){
    int a;
    printf("menu\n");
    printf("option 1\n");
    printf("option 2\n");
    printf("option 3\n");
    scanf("%d",&a);
    switch (a)
    {
    case 1:
        printf("you chose option 1");
    break;
    case 2:
        printf("you chose option 2");
    break;
    case 3:
        printf("you chose option 3");
    break;
    default:
        printf("invalid");
    }
    return 0;
}
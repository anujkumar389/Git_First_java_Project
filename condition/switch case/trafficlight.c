#include<stdio.h>
int main(){
    char traffic_light;
    printf("enter your charecter");
    scanf("%c",&traffic_light);
    switch (traffic_light)
    {
    case 'R':
    case 'r':
    printf("stop");
        break;
    case 'y':
    case 'Y':
    printf("wait");
        break;
    case 'G':
    case 'g':
    printf("Go");
        break;

    default: 
        printf("Invilid input");
        break;
    }
    return 0;
}
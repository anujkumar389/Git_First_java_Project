#include<stdio.h>
int main(){
    int a;
    printf("Enter your no :");
    scanf("%d",&a);
    int quocent=a;
    int remender=0;
    int max=0;
    int min=9;
    while(quocent>=1){
        remender=quocent%10;
        quocent=quocent/10;
        if(remender>max){
            max=remender;
        }
        if (remender<min)
        {
            min=remender;
        }
       
    }
    printf("%d maximum no \n",max);
    printf("%d minimum no",min);
    return 0;
}
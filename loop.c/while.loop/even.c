#include<stdio.h>
int main(){
    int user;
    printf("enter you no :");
    scanf("%d",&user);
    int a=1;

    while(a<=user){
    
        if(a%2==0)
        printf("%d",a);
        
        a++;
    }
    return 0;
}
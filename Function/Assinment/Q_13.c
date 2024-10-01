#include<stdio.h>
void m1(){
    int a;
    printf("Enter you no :");
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
        for(int j=1;i<=a;j++){
            printf("*");
        }
        printf("\n");
    }
}
void m2(){
    int a;
    printf("Enter you no :");
    scanf("%d",&a);
    for(int i=1,s=a;i<=a;i++,s--){
        for(int k=1;k<=s;k++){
            printf(" ");
        }
        for(int j=1;j<=i*2-1;j++){
            printf("*");
        }
        printf("\n");
    }
}
int main(){
    
    m1();
    m2();
    
}
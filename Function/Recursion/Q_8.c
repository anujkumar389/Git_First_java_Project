#include<stdio.h>
int i=0;
int j=1;
void febonacci(int a){
    if(i==0){
        printf("%d,%d,",i,j);
    }
    int k=i+j;
    if(k>=a){
        if(k>a){
            return;
        }
        printf("%d,",k);
        return;
    }
    printf("%d,",k);
    i=j;
    j=k;
    febonacci(a);
}

 
int main(){
    int a;
    printf("Enter no :");
    scanf("%d",&a);
    febonacci(a);

}
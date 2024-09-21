#include<stdio.h>
int main(){
    int n=1;
    
for(;n>0;){
    printf("Enter no :\n");
    scanf("%d",&n);
    if(n<0||n==0){
        if(n<0){
            printf("Found negative number pls stop the loop\n");
        }else{
            printf("Found Zero pls stop the loop\n");
        }
        break;
    }
    int febonacci=0;
    int a=0;
    int b=1;
    int c=a+b;
    for(;c<=n;c=a+b){
        if(c==n){
          febonacci=1;
          break;  
        }
        a=b;
        b=c;
    }
    
        int check=1;
        if(n==1){
            check=0;
        }
        for(int i=2;i<n;i++){

            if(n%i==0){
            check =0;
            break;
        }

        }
    
        if(check==1&&febonacci==0){
        printf("%d is prime but not fibonacci\n",n);
        }else if(check==0&&febonacci==1){
            printf("%d is fibonacci but not prime \n",n);
        }else if(check==1&&febonacci==1){
            printf("%d is prime and fibonacci\n",n);
        }else{
            printf("%d is not prime and not fibonacci \n",n);
        }
}
return 0;
}
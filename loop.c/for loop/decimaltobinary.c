#include<stdio.h>
int main(){
  int n;
  printf("Enter your no :");
  scanf("%d",&n);
  int a=0;
  if(n%2==0){
    a=1;
  }
  
  for(int i=n;i>0;i=i/2){
  
    int r=i%2;
    a=a*10+r;
  }if(n%2==0&&n<=10){
    a=a/10;
    printf("%d\n",a);
  }
  
  int reverse=0;
  
  if(n%2==1||n>10){
    for(int i=a;i>0;i=i/10){
    int r=i%10;
    reverse=reverse*10+r;
    }
    if(n>10&&n%2==0){
    reverse=reverse/10;
    }
     printf("%d\n",reverse);
  }
 

return 0;
}
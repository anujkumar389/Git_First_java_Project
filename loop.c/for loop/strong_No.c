#include<stdio.h>
int main(){
  printf("Enter your no :");
  int n;
  scanf("%d",&n);
  
  int m=0;
  for(int i=n;i>0;i=i/10){
    int r=i%10;
    int f=1;
    for(int count =1;count<=r;count++){
        f=f*count;
    }
    m=m+f;
  }if(m==n){
    printf("%d",m);
  }else{
    printf("no");
  }
  return 0;
}
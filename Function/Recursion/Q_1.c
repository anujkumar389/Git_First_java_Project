#include<stdio.h>
int counting(int n,int b){
  if(b>n){
    return 0;
  }
  printf("%d",b);
  counting(n,b+1);
}
int  counting2(int n){
  if(n==1){
    printf("%d",n);
    return 0;
  }
  counting2(n-1);
  printf("%d",n);
}
int main(){
  int a;
  printf("Enter no :");
  scanf("%d",&a);
  // counting(a,1);
  counting2(a); 
  return 0;
}
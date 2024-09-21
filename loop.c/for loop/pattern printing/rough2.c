#include<stdio.h>
int main(){
  int n;
  printf("Enter no :");
  scanf("%d",&n);
  int count=0;
  for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
      printf("%d",++count);
    }
    if(i!=1){
    int c=count-1;
    for(int k=i-1;k>0;k--){
      printf("%d",c--);
    }
    }
    printf("\n");
  }
  return 0;
}
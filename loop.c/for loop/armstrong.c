#include<stdio.h>
int main(){
  printf("Enter no :");
  int n;
  scanf("%d",&n);
  int count=0;
  for(int i=n;i>0;i=i/10){
    count++;
  }
  int m=0;
  for(int j=n;j>0;j=j/10){
    int r=j%10;
    int s=r;
    for(int k=1;k<count;k++){
      s=s*r;
    }
    m=m+s;
    
  }
  if(m==n){
    printf("armstrong");
  }else{
    printf("Not");
  }
return 0;
}
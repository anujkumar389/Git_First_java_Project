#include<stdio.h>
int main(){
int arr[3]={1,2,1};
int p=0;
for(int i=0;i<3;i++){
  for(int j=i+1;j<3-p;j++){
    if(arr[i]==arr[j]){
       for(int k=j;k<3-p;k++){
         arr[k]=arr[k+1];
         p++;
         }
       }
    }
    }
    printf("array after deleting elements:\n");
    for(int i=0;i<3;i++){
      printf("%d ",arr[i]);
    }
return 0;
}
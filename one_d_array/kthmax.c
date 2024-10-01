#include<stdio.h>
int main(){
    int size;
    printf("Enter size :");
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    for(int j=0;j<size;j++){
        for(int k=j+1;k<size;k++){
            if(arr[k]>arr[j]){
                int s=arr[j];
                arr[j]=arr[k];
                arr[k]=s;
            }
        }
    }
   printf("Enter your Knth no :");
   int m;
   scanf("%d",&m);
   printf("knth max : %d\n",arr[m-1]);
   printf("knth min : %d",arr[size-m]);


    return 0;
}
//reverse the element of array
#include<stdio.h>
int main(){
    int size;
    printf("Enter your size ");
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    int a=0;
    for(int j=0,k=size-1;j<size/2;j++,k--){
        // if(j==k){
        //     break;
        // }
        int r=arr[j];
        arr[j]=arr[k];
        arr[k]=r;
        //printf("j:%d\n",j);
        //printf("k:%d\n",k);
    }
    for(int l=0;l<size;l++){
        printf("%d",arr[l]);
    }
    return 0;
}
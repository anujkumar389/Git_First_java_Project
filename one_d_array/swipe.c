#include<stdio.h>
int main(){
    int arr[]={5,2,4,3};
    int a=arr[0];
    int b=arr[3];
    arr[0]=b;
    arr[3]=a;
    


    for(int i=0;i<4;i++){
        printf("%d",arr[i]);
    }
}
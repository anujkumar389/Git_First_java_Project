#include<stdio.h>
int main(){
    int size;
    printf("Enter size:");
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
    scanf("%d",&arr[i]);
    }
    for(int j=0;j<size;j++){
        if(arr[j]>arr[j-1]&&arr[j]>arr[j+1]){
            printf("%d",arr[j]);
        }
    }
    return 0;
}
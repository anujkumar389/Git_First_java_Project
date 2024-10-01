#include<stdio.h>
int main(){
    int arr[5];
    int a=sizeof(arr)/sizeof(arr[0]);
    printf("%d",a);
    for(int i=0;i<a;i++){
        printf("Enter your no :");
        scanf("%d",&arr[i]);

    }
    for(int j=0;j<a;j++){
        int sum ;
        printf("%d",arr[j]);
    }
    return 0;
}
#include<stdio.h>
int main(){
    int size;
    printf("Enter your size of array :");
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        printf("Enter your element for index %d :",i);
        scanf("%d",&arr[i]);
    }
    int sum=1;
    for(int j=0;j<size;j++){
        
        sum=sum*arr[j];
    }
    printf("%d",sum);
    // int average=sum/size;
    // printf("%d",average);
}
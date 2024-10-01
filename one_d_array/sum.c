#include<stdio.h>
int main(){
    int size;
    printf("Enter your array size :");
    scanf("%d",&size);
    int arr[size];
    // scanf("%d",&arr[0]);
    // scanf("%d",&arr[1]);
    // scanf("%d",&arr[2]);
    // scanf("%d",&arr[3]);
    // scanf("%d",&arr[4]);
    // printf("%d",arr[3]);
    for(int i=0;i<size;i++){
        printf("Enter your array element for %d :",i);
        scanf("%d",&arr[i]);
    }
    int sum=0;
    for(int j=0;j<size;j++){
        sum=sum+arr[j];
       // printf("%d",arr[j]);
    }
    printf("%d",sum);
    //for()
}
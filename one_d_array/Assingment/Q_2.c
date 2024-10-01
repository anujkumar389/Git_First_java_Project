#include<stdio.h>
int input(int arr[],int size){
    
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    return 0;
}
int output(int arr[],int size){

    for(int i=0;i<size;i++){
       printf("%d",arr[i]);
    }
    return 0;
}
int main(){
    int size;
    printf("Enter size :");
    scanf("%d",&size);
    int arr[size];
     size=sizeof(arr)/sizeof(int)+1;

    input(arr,size);
    output(arr,size);
   
    return 0;
}
// int size=sizeof(Array name )/sizeof(data type);
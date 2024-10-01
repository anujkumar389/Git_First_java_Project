// 6.write a program to reverse an array using pointers.
// Input : Array elements: [1 , 2 , 3 , 4 , 5 ]
// Output : Reversed array: [5 , 4 , 3 , 2 , 1]
#include<stdio.h>
void reverse(int size,int arr[]){

    int r=size-1;
    if(size/2==0){
        size++;
    }
    for(int *p=arr,*q=arr+r;p<(arr+size/2);p++,q--){
        int temp=*q;
        *q=*p;
        *p=temp;
    }
}
int main(){
    int size;
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    reverse(size,arr);
    for(int i=0;i<size;i++){
        printf("%d",arr[i]);
    }
return 0;
}
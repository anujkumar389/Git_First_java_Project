// 7.Write a program to search an element in array using pointers.
// Input : Array elements: [1 , 12 , 33 , 41 , 15 ] , k = 33
// Output : 33 is found at 2nd index.
#include<stdio.h>
int main(){
    int size,*p=&size;
    printf("Enter size :");
    scanf("%d",p);
    int arr[size];
    printf("Enter element :");
    for(int *q=arr;q<(arr+size);q++){
        scanf("%d",q);
    }
    int k;
    printf("Enter your finding no : \n");
    scanf("%d",&k);
    for(int i=0;(arr+i)<(arr+size);i++){
        if(*(arr+i)==k){
            printf("%d is found at %dth index",k,i);
        }
    }
return 0;
}
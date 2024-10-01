//  Write a program to create an Array and take input from user and count
// the number of even elements and odd element .
// INPUT – [4,9,7,2,11]
// OUTPUT : 3 element is odd & 2 element is even .
#include<stdio.h>
int main(){
    int size;
    printf("Enter size :");
    scanf("%d",&size);
    int arr[size];
    int odd=0,even=0;
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
        if(arr[i]%2==0){
            even++;
        }else{
            odd++;
        }
    }
    printf("%d element is odd & %d element is even ",odd,even);
    return 0;
}
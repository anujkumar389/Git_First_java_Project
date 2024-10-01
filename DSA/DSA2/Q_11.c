// 11. Write a program to find the equilibrium point in an array
// Input: { 0, -3, 5, -4, -2, 3, 1, 0 }
// Output: The equilibrium point is 3
#include<stdio.h>
int main(){
    int size;
    printf("Enter size");
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=1;i<size-1;i++){
        int a=0;
        int b=0;
        for(int j=i+1;j<size;j++){
            a=a+arr[j];
        }
        for(int k=i-1;k>=0;k--){
            b=b+arr[k];
        }
        if(a==b){
            printf("The equilibrium point is %d\n",i );
        }
    }
    return 0;
}
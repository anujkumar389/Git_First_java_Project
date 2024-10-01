// Write a program to find the maximum sum subarray in an array?
// Input : { -2, -3, 4, -1, -2, 1, 5, -3 }
// Output : The maximum sum subarray is { 4, -1, -2, 1, 5 }
#include<stdio.h>
int main(){
int size;
printf("Enter size :\n");
scanf("%d",&size);
printf("Enter element :\n");
int arr[size];
for(int i=0;i<size;i++){
    scanf("%d",&arr[i]);
}
int x,y;
int max=arr[0];
for(int i=0;i<size;i++){
    
    for(int j=i+1;j<size;j++){
        if(arr[i]+arr[j]>max){
            max=arr[i]+arr[j];
            x=i;
            y=j;
        }
    }
}
printf("The maximum sum subarray is :\n");
for(int i=x;i<=y;i++){
    printf("%d,",arr[i]);
}
return 0;
}

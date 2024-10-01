// Write a program to find the leaders in an array?
// Input : { 16, 17, 4, 3, 5, 2 }
// Output : The leaders are 17, 5, and 2
#include<stdio.h>
int main(){
    int size;
    printf("Enter size :");
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<size;i++){
        int check=1;
        for(int j=i+1;j<size;j++){
            if(arr[i]<arr[j]){
                check=0;
                break;
            }
        }
        if(check==1){
            printf("%d is Leader \n",arr[i]);
        }
    }
    return 0;
}
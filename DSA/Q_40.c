// .Write a program to find the element that appears once in an array where
// every
// other element appears twice?
// Input : { 7, 3, 5, 4, 5, 3, 4 }
// Output : The element that appears once is 7
#include<stdio.h>
int main(){
    int size;
    printf("Enter size");
    scanf("%d",&size);
    int arr[size];
    printf("Enter element :\n");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<size;i++){
        int check=1;
        int check2=1;
        for(int k=i-1;k>=0;k--){
            if(arr[i]==arr[k]){
                check=0;
                check2=0;
                break;
            }
        }
        for(int j=i+1;j<size&&check==1;j++){
            if(arr[i]==arr[j]){
                check2=0;
                break;
            }
        }
        if(check2==1){

            printf("The element that appears once is %d\n",arr[i]);
        }
    }
    return 0;
}
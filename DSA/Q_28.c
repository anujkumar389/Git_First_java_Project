// 28.Write a program to rotate an array by d elements?
// Input : { 1, 2, 3, 4, 5, 6, 7 }, d = 2
// Output : {6,7,1,2, 3, 4, 5 }
#include<stdio.h>
int main(){
    int size;
    printf("Enter size :");
    scanf("%d",&size);
    int arr[size];
    printf("Enter elements :");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    int d;
    printf("Enter d elements :");
    scanf("%d",&d);
    for(int i=1;i<=d;i++){
        int temp=arr[size-1];
        for(int j=size-1;j>=0;j--){
            if(j==0){
                arr[j]=temp;
                break;
            }
            arr[j]=arr[j-1];
        }
        
    }
    printf("Updated array :");
    for(int i=0;i<size;i++){
        printf("%d,",arr[i]);
    }
    return 0;
}
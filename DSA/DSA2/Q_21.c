// 21. Write a program to find the largest subarray with equal number of 0s and 1s
// Input: { 1, 0, 1, 1, 1, 0, 0 }
// Output: The largest subarray with equal number of 0s and 1s is { 1, 0, 1, 1, 1, 0 }
#include<stdio.h>
int main(){
    int size;
    printf("Enter size :");
    scanf("%d",&size);
    int arr[size];
    printf("Enter element :\n");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    int x;
    int y;
    int s=1;
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            int one=0;
            int zero=0;
            int count=1;
            for(int k=i;k<=j;k++){
                
                if(arr[k]==1){
                    one++;
                }else if(arr[k]==0){
                    zero++;
                }
                count++;
            }
            if(one==zero&&s<count){
                x=i;
                y=j;
                s=count;  
            }

        }
    }
    for(int i=x;i<=y;i++){
        printf("%d,",arr[i]);
    }
    return 0;
}
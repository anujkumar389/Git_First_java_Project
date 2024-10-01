// 39. Write a program to find the maximum sum increasing subsequence in an array
// Input: { 1, 101, 2, 3, 100, 4, 5 }
// Output: The maximum sum increasing subsequence is { 1, 2, 3, 100 }
#include<stdio.h>
int main(){
    int size;
    printf("Enter size :");
    scanf("%d",&size);
    printf("Enter element :");
    int arr[size];
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    int max=arr[0];
    int count=1;
    int arr_max[size];
    for(int i=size-1;i>=0;i--){
        int temp_count=1;
        int temp=arr[i];
        for(int j=i-1;j>=0;j--){
            if(arr[j]<arr[i]){
                temp+=arr[j];
                temp_count++;
            }
        }
        if(max<temp){
            int x=0;
            max=temp;
            count=temp_count;
            for(int k=0;k<=i;k++){
                if(arr[k]<arr[i]||k==i){
                    arr_max[x]=k;
                    x++;
                }
            }
        }
    }
    printf("max :%d\n",max);
    for(int i=0;i<count;i++){
        printf("%d,",arr[arr_max[i]]);
    }
    return 0;
}
 
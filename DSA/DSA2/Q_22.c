// 22. Write a program to find the maximum length bitonic subarray in an
// array
// Input: { 12, 4, 78, 90, 45, 23 }
// Output: The maximum length bitonic subarray is { 4, 78, 90, 45, 23 }
// Explanation: In the given array, bitonic subarray is 4 <= 78 <= 90 >= 45 >= 23.
#include<stdio.h>
int main(){
    int size;
    printf("Enter size :");
    scanf("%d",&size);
    int arr[size];
    printf("Enter element :");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    int length=0;
    int x=0,y=0;
    for(int i=0;i<size;i++){
        for(int j=i;j<size;j++){
                    int check1=0;

            if(arr[i+1]>=arr[i]){
                 int stop=1;   

                for(int k=i;k<=j&&stop==1;k++){
                    if(arr[k+1]<=arr[k]&&i!=size-1){
                        check1=0;
                        for(int l=k;l<=j;l++){
                            if(arr[l+1]>arr[l]&&l!=j){
                                check1=0;
                                stop=0;
                                break;
                            }else{
                                check1=1;
                            }
                        }
                    }else{
                        check1=1;
                    }
                }
                if(check1==1){
                    if(length<(j-i)+1){
                        printf("True i=%d,j=%d\n",i,j);
                        length=((j-i)+1);
                        x=i;
                        y=j;
                    }
                }
            }else{
                break;
            }
        }
    }
    printf("The maximum length bitonic subarray is :");
    for(int i=x;i<=y;i++){
        printf("%d,",arr[i]);
    }
    return 0;
}
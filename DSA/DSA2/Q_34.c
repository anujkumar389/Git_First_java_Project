// 34. Write a program to find the triplet whose sum is closest to zero
// Input: { -1, 2, 1, -4 }
// Output: The closest triplet sum to zero is -1
#include<stdio.h>
int main(){
    int size;
    printf("Enter size :\n");
    scanf("%d",&size);
    int arr[size];
    printf("Enter Element :");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    int sum=arr[0]+arr[1]+arr[2];
    int sum2=999;
    int x,y,z;
    for(int i=0;i<size-2;i++){
        for(int j=i+1;j<size-1;j++){
            for(int k=j+1;k<size;k++){
                int temp=arr[i]+arr[j]+arr[k];
                int temp2=temp>=0?temp:temp*-1;
                if(temp2<sum2){
                    sum2=temp2;
                    sum=temp;
                    x=i;
                    y=j;
                    z=k;
                }
            }
        }
    }
    printf("The closest triplet sum to zero is %d\n",sum);
    printf("i=%d,j=%d,k=%d",x,y,z);
    return 0;
}
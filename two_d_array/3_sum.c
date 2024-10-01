//sum of all element
#include<stdio.h>
int main(){
    int c,r;
    printf("Enter colume :");
    scanf("%d",&c);
    printf("enter row :");
    scanf("%d",&r);
    int arr[c][r];
    for(int i=0;i<c;i++){
        for(int j=0;j<r;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int sum=0;
    int rsum=0;
    int csum=0;
    for(int i=0;i<c;i++){
        for(int j=0;j<r;j++){
            sum=sum+arr[i][j];
           // rsum=rsum+arr[j];
            

        }
       // csum=csum+arr[i];
    }
    printf("%d %d %d\n",sum);
    for(int i=0;i<c;i++){
        for(int j=0;j<r;j++){
            printf("%d",arr[i][j]);
        }
        printf("\n");
    }
}
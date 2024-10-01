#include<stdio.h>
int main(){
    int r,c;
    printf ("enter row :");
    scanf("%d",&r);
    printf("Enter colume :");
    scanf("%d",&c);
    int arr[r][c];
    printf("Enter element :");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int element ;
    printf("Enter your finding element :");
    scanf("%d",&element);
     for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(arr[i][j]==element){
                printf("your index is : [%d,%d]",i,j);
                break;
            }
        }
    }
return 0;
}

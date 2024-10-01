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
    int check=1;
    printf("Enter number :");
    scanf("%d",&element);
     for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            
            if(arr[i][j]==element){
                printf("**your given number %d is present in array**",element);
                check=0;
                break;
            }
        }
    }
    if(check ==1){
        printf("Number not found ....!!!");
    }
return 0;
}

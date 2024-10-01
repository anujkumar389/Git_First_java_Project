#include<stdio.h>
int main(){
    int r,c;
        printf("Enter row and colume :");
        scanf("%d%d",&r,&c);
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
        printf("Your metrix :\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d",arr[i][j]);
        }
        printf("\n");
    }
    printf("Enter switchinfg row :");
    int a,b;
    scanf("%d%d",&a,&b);
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(i==a-1){
                int temp=arr[i][j];
                arr[i][j]=arr[b-1][j];
                arr[b-1][j]=temp;
                
            }
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d",arr[i][j]);
        }
        printf("\n");
    }

return 0;
}
#include<stdio.h>
int main(){
    int size;
    printf("Enter row and colume ");
    scanf("%d",&size);
    int row=size;
    int colume=size;
    int arr[row][colume];  
    printf("Enter element :");
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            printf(" %d",arr[i][j]);
        }
        printf("\n");
    }
    int a=0,b=0;
    int c=0,d=colume-1;
    int e=row-1,f=colume-1;
    int g=row-1,h=0;
    // int stop;
    // if(size%2==0){
    //     stop=size/2;
    // }else{
    //     stop=(size/2)+1;
    // }
    for(int i=1;i<=size%2==0?size/2:1+(size/2);i++){
        for(int j=b;j<=d;j++){
            printf(" %d",arr[a][j]);
        }
        for(int k=c+1;k<=e;k++){
            printf(" %d",arr[k][d]);
        }
        for(int l=f-1;l>=h;l--){
            printf(" %d",arr[e][l]);
        }
        for(int m=g-1;m>a;m--){
            printf(" %d",arr[m][h]);
        }
        a=a+1;b=b+1;
        c=c+1;d=d-1;
        e=e-1;f=f-1;
        g=g-1;h=h+1;
    }
    return 0;
}
// Write a program to find the repeating element in the matrix.
//  INPUT – 1 5 2
//          3 15 4
//          6 7 15
// OUTPUT – 15 is repeated count = 2
#include<stdio.h>
int main(){
    int r,c;
printf("Enter row & colume :\n");
scanf("%d%d",&r,&c);
int arr[r][c];
printf("Enter element :\n");
for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        scanf("%d",&arr[i][j]);
    }
}
printf("Matrix :\n");
for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        printf("%d ",arr[i][j]);
    }
    printf("\n");
}
for(;1;){
int num;
printf("Enter num :\n");
scanf("%d",&num);
int repet;
int count=0;
for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        if(arr[i][j]==num){

            repet=arr[i][j];
            count++;
        }
    }
}
if(count>1){
printf("%d is repeted count %d\n",repet,count);
}else{
    printf("Not repeted ...!\n");
}
}
return 0;
}
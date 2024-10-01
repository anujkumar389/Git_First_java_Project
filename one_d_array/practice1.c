#include<stdio.h>
int main(){
    int size;
    printf("Enter size :");
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    int index1;
    printf("ENter 1st index ");
    scanf("%d",&index1);
    int index2;
    printf("Enter 2nd index :");
    scanf("%d",&index2);
    int r=index2;
    for(int i=index1;i<index2;i++,r--){
        int temp=arr[i];
        arr[i]=arr[r];
        arr[r]=temp;
    }
    for(int i=0;i<size;i++){
        printf("%d\n",arr[i]);
    }
    return 0;
}
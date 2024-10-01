#include<stdio.h>
int main(){
    int size;
    printf("Enter size :");
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    int index1,index2;
    printf("ENter 1st index ");
    scanf("%d",&index1);
    printf("Enter 2nd index :");
    scanf("%d",&index2);
    int r=index2;
    int size2=0;
    for(int i=index1;i<=index2;i++){
        size2++;
    } 
    printf("Size %d\n",size2);
    for(int i=0;i<size2/2;i++,r--,index1++){
        int temp=arr[index1];
        arr[index1]=arr[r];
        arr[r]=temp; 
    }
    for(int i=0;i<size;i++){
        printf("%d\n",arr[i]);
    }
    return 0;
}
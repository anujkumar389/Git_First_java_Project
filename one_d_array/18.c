//delete array element through index number
#include<stdio.h>
int main(){
    int size;
    printf("Enter your size :");
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    int index;
    printf("Enter index :");
    scanf("%d",&index);
    for(int j=index+1;j<size;j++,index++){
        arr[index]=arr[j];
    }
    --size;
    for(int k=0;k<size;k++){
        printf("%d",arr[k]);
    }

}
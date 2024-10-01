// Write a program to delete the given element from the array.
// INPUT- arr=[3,7,9,2,4] Num=2 OUTPUT- arr=[3,7,9,4]
#include<stdio.h>
int main(){
    int size;
    printf("Enter size :");
    scanf("%d",&size);
    int arr[size];
    printf("Enter element :\n");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    int num;
    printf("Enter your deleting element :\n");
    scanf("%d",&num);
    for(int i=0;i<size;i++){
        if(arr[i]==num){
            for(int j=i;j<size-1;j++){
                arr[j]=arr[j+1];
            }
            break;
        }
    }
    printf("Current array :\n");
    for(int i=0;i<size;i++){
        printf("%d\n",arr[i]);
    }
return 0;
}
// Write a program to take an array and an index number from the user
// and print the index value.
// INPUT-[8,55,4,2,1] Index no.= 1
// OUTPUT- Index value = 55
#include<stdio.h>
int main(){
    int size;
    printf("Enter size :\n");
    scanf("%d",&size);
    int arr[size];
    printf("Enter element :\n");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    int index;
    printf("Enter your index  :\n");
    scanf("%d",&index);
    if(index>0&&index<size){
    printf("Index value : %d\n",arr[index]);
    }else{
        printf("Please enter Index value between 0 And %d...!",size);
    }
    return 0;
}
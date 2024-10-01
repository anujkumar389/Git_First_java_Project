//
#include<stdio.h>
int main(){
    int size;
    printf("Enter your array size :");
    scanf("%d",&size);
    int arr[size];
    printf("Please enter your arrey element 0 or 1...!\n");
    for(int i=0;i<size;){
        int f;
        printf("enter your value for index %d :",i);
        scanf("%d",&f);
        if(f==1||f==0){
            arr[i]=f;
            i++;
        }
    }
    for(int j=0;j<size;j++){
        printf("%d",arr[j]);
    }
    return 0;
}
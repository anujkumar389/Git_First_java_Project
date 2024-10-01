#include<stdio.h>
int main(){
    int size;
    printf("Enter size: ");
    scanf("%d",&size);
    int arr[size];

    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    int c=arr[0];
    for(int i=0;i<size;i++,c++){
        if(arr[i]!=c){
            printf("%d is missing\n",c);
        }
    }
    return 0;
}
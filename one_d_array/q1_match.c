#include<stdio.h>
int main(){
    int size;
    printf("Enter your array size :");
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        printf("Enter your element for index %d :",i);
        scanf("%d",&arr[i]);
    }
    int a;
    printf("Enter your finding number :");
    scanf("%d",&a);

    for(int j=0;j<size;j++){
        if(arr[j]==a){
            printf("Your number is Match :");
            break;
        }else if((j==size-1)!=a&&j==size-1){
          printf("Not Match...!!");
         }
    }
    return 0;
}

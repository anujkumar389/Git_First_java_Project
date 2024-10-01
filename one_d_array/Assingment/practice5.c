//array : {3,5,2,4,8,9}
//a=1,b=4
//output :{3,2,4,5,8,9};

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
    printf("Enter 1st index :");
    scanf("%d",&index1);
    int index2;
    printf("Enter 2nd index :");
    scanf("%d",&index2);
    for(int i=index1;i<index2;i++){
        for(int j=i+1;j<index2;j++){
            if(arr[i]>arr[j]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    printf("Updated array :\n");
    for(int i=0;i<size;i++){
        printf("%d\n",arr[i]);
    }
}
#include<stdio.h>
int main(){
    int size;
    printf("Enter size");
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    for(int j=0;j<size;j++){
        int sum=0;
        for(int c=1;c<arr[j];c++){
            if(arr[j]%c==0){
                sum=sum+c;
            }
        }
        if(sum==arr[j]){
            printf("perfect no is :");
        printf("%d\n",arr[j]);
        }
    }
    return 0;
}
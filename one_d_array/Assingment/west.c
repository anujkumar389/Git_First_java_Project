#include <stdio.h>
int main(){
    int size;
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    int l=0; int r=size-1;
    for(int i=2;l<(size-2)/2;l++,i++,r--){
        int temp=arr[i];
        arr[i]=arr[r];
        arr[r]=temp;
    }
    printf("Updated Array :");
    for(int i=0;i<size;i++){
        printf("%d\n",arr[i]);
    }
    return 0;
}

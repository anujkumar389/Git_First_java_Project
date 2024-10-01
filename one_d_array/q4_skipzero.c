#include<stdio.h>
int main(){
    int arr[]={1,2,3,0,4,5};
    int mult=1;
    for(int i=0;i<6;i++){
        if(arr[i]!=0){
            mult=mult*arr[i];
        }
    }
    printf("%d",mult);
    return 0;
}
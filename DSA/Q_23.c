// WAP to take input in array and remove all duplicates numbers?
// input - [ 3,2,3,7,2,9,3,1,2,7 ]
// output - [ 3,2,7,9,1, ]
#include<stdio.h>
int main(){
    int size;
    printf("Enter size");
    scanf("%d",&size);
    int arr[size];
    printf("Enter element \n");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]==arr[j]){
                
                if(j==size-1){
                    arr[j]=arr[j-1];
                    continue;
                }
                for(int k=j;k<size-1;k++){
                    for(int l=k+1;l<size;l++){
                        if(arr[k]!=arr[l]){
                            arr[k]=arr[l];
                            break;
                        }else{
                            if(l==size-1){
                                for(int m=size-1;m>i;m--){
                                    if(arr[i]!=arr[m]){
                                        arr[k]=arr[m];
                                        break;
                                    }
                                }
                            }
                        }
                    }
                    
                }
                
            }
        }
    }
    int count=0;
    int c=1;
    for(int i=0;i<size&&c==1;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]==arr[j]){
                count++;
                c=0;
            }
        }
    }
    printf("count : %d\n",count);
    printf("your updated array \n");
    for(int i=0;i<size-count;i++){
        printf("%d\n",arr[i]);
    }
    return 0;
}
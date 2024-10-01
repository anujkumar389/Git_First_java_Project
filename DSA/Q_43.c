// .Write a program to print all the subsets of an array?
// Input : { 1, 2, 3 ,4}
// Output: { {},{1},{2},{3},{1,2},{1,3},{2,3},{1,2,3} }
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
    int subsets=1;
    for(int i=size;i>0;i--){
        subsets=subsets*2;
    }
    for(int i=0;i<subsets;i++){
        if(i==0){
            printf("{ }\n");
            continue;
        }
        if(i<=size+1){
        for(int j=0;j<size;j++){
            printf("{%d}\n",arr[j]);
            i++;
        }
        }else{
            for(int k=0;k<size;k++){
                if(k==size-1){
                    printf("{");
                    for(int m=0;m<size;m++){
                        printf("%d,",arr[m]);
                    }
                    printf("}");
                    i++;
                }
                for(int l=k+1;l<size;l++){
                    printf("{%d,%d}\n",arr[k],arr[l]);
                    i++;
                }
            }
        }
        
    }
return 0;
}
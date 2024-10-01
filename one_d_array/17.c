//delete arrey by element given by user
#include<stdio.h>
int main(){
    int size;  // size of array.
    printf("Enter your :");
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){    //Entering the element of array
        scanf("%d",&arr[i]);
    }
    int delete;             
    printf("Enter delete no :");
    scanf("%d",&delete);        //enter deleting element.
    int j=0;
    for(;j<size;j++){       //for finding deleting element index. 
        if(arr[j]==delete){
            break;            
        }
    }
    for(int k=j+1;j<size;j++,k++){
        arr[j]=arr[k];
    }
    --size;
    for(int l=0;l<size;l++){
        printf("%d ",arr[l]);
    }
    return 0;
}
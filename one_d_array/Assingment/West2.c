// #include<stdio.h>
// void input (int array[],int size){
//     for(int i=0;i<size;i++){
//         scanf("%d",&array[i]);
//     }
// }
// int main(){
//     int size1;
//     printf("Enter your 1st array size :");
//     scanf("%d",&size1);
//     int arr1[size1];
//     printf("Enter element :");
//     input (arr1,size1);
//     int size2;
//     printf("Enter 2nd array size :");
//     scanf("%d",&size2);
//     int arr2[size2];
//     printf("Enter element :");
//     input (arr2,size2);
//     for(int i=0;i<size1;i++){
//         for(int j=0;j<size2;j++){
//             if(arr1[i]==arr2[j]){
//                 printf("common element :%d \n",arr1[i]);
//             }
//         }
//     }
//     return 0;

// } #include<stdio.h>
 int main(){
    int size;
    int count=1;
    printf("Array size :");
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(arr [i]==arr[j]){
                count++;
            }
        }
        if(count>=2){
        printf("%d is repeated ",arr[i]);
        printf("%d is count ",count);
        break;
        }
        
    }
    return 0;
}
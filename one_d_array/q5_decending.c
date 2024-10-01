#include<stdio.h>
int main(){
//     int size;
//     printf("Enter your array :");
//     scanf("%d",&size);
//     int arr[size];
//     for(int i=0;i<size;i++){
//         scanf("%d",&arr[i]);
//     }
//     for(int k=0;k<size;k++){
        
//         for(int j=k+1;j<size;j++){
//             if(arr[k]<arr[j]){
//                 int swip=arr[k];
                
//                 arr[k]=arr[j];
//                 arr[j]=swip;
//             }
//         }
//     }
//     for(int n=0;n<size;n++){
//         printf("%d",arr[n]);
//     }
//     return 0;
int size;
printf("Enter size");
scanf("%d",&size);
int arr[size];
for(int i=0;i<size;i++){
    scanf("%d",&arr[i]);
}
for(int j=0;j<size-1;j++){
    for(int k=j+1;k<size;k++){
        if(arr[k]>arr[j]){
            int s;
            s=arr[j];
            arr[j]=arr[k];
            arr[k]=s;
        }
    }
}
for(int k=0;k<size;k++){
    printf("%d",arr[k]);
}
return 0;
}
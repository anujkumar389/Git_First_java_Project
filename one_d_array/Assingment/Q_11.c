// . Write a program to take an array from user and separate the even
// and odd elements in two different arrays.
// INPUT- arr=[2,5,6,3,8]
// OUTPUT- even = [2,6,8] , odd = [5,3]
#include<stdio.h>
int main(){
    int size;
    printf("Enter size :\n");
    scanf("%d",&size);
    int arr[size];
    printf("Enter elements :\n");
    int evenCount=0,oddCount=0;
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
        if(arr[i]%2==0){
            evenCount++;
        }else{
            oddCount++;
        }
    }
    int even_array[evenCount],odd_array[oddCount];
    int evenIndex=0,oddIndex=0;
    for(int i=0;i<size;i++){
        if(arr[i]%2==0){
            even_array[evenIndex]=arr[i];
            evenIndex++;
        }else{
            odd_array[oddIndex]=arr[i];
            oddIndex++;
        }
    }
    printf("Even array :\n");
    for(int i=0;i<evenCount;i++){
        printf("%d\n",even_array[i]);
    }
    printf("Odd array :\n");
    for(int i=0;i<oddCount;i++){
        printf("%d\n",odd_array[i]);
    }
return 0;
}
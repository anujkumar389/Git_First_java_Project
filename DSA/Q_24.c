// 24. WAP to take input in array and print all duplicates numbers and its count?
// I nput [ 3,2,3,7,2,9,3,1,2,7 ]
// Output -
// -3 duplicate.
// Count=3.
// - 2 duplicate.
// Count=3.
 #include<stdio.h>
 int main(){
    int size;
    printf("Enter size :");
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<size;i++){
        int count=1;
        int repeat;
        int check=1;
        for(int k=i-1;k>=0;k--){
            if(arr[i]==arr[k]){
                check=0;
            }
        }

        for(int j=i+1;j<size&&check==1;j++){
            if(arr[i]==arr[j]){
                repeat=arr[i];
                count++;
                
                
            }
        }
        if(count>1){
            printf("%d is repeated , count %d\n",repeat,count);
        }
    }
   
    return 0;
}
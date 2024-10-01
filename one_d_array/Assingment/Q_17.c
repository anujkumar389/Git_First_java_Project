// Write a program to reverse the elements of an array.
// INPUT-arr = [2,7,9,5,6]
// OUTPUT- arr=[6,5,9,7,2]
int main(){
    int size;
    printf("Enter size :");
    scanf("%d",&size);
    int arr[size];
    printf("Enter Element ");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0,reverse=size-1;i<size/2;i++,reverse--){
        int temp=arr[i];
        arr[i]=arr[reverse];
        arr[reverse]=temp;
        
    }
    for(int i=0;i<size;i++){
        printf("%d,",arr[i]);
    }
    return 0;
}
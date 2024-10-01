// .Write a program to find the first repeating element in an array?
// INPUT:[3,2,4,7,2,9,5,1,2]
// OUTPUT:2 is repeated, count =3
 #include<stdio.h>
 int main(){
    int size;
    printf("Enter size :");
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    int count=1;
    int repeat;
    int check=1;
    for(int i=0;i<size&&check==1;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]==arr[j]){
                repeat=arr[i];
                count++;
                check=0;
            }
        }
    }
    if(count>1){
    printf("%d is repeated , count = %d",repeat,count);
    }else{
        printf("No any element is repeated !");
    }
    return 0;
}
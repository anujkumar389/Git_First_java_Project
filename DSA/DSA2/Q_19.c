// 19. Write a program to find the minimum distance between two numbers in an array
// Input: { 2, 5, 3, 5, 4, 4, 2, 3 }, x = 3, y = 2
// Output: The minimum distance between 3 and 2 is 1
#include<stdio.h>
int main(){
    int size;
    printf("Enter size :");
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    int x,y;
    printf("Enter X :\n");
    scanf("%d",&x);
    printf("Enter Y :\n");
    scanf("%d",&y);
    int distance=size;
    int check=0;
    for(int i=0;i<size-1;i++){
        if(arr[i]==x||arr[i]==y){
            if(arr[i]==x){
                for(int j=i+1;j<size;j++){
                    if(arr[j]==y){
                        if(distance>j-i){
                            distance=j-i;
                            check=1;
                            break;
                        }
                    }
                }
            }else{
                for(int j=i+1;j<size;j++){
                    if(arr[j]==x){
                        if(distance>j-i){
                            distance=j-i;
                            check=1;
                            break;
                        }
                    }
                }
            }
        }
    }
    if(check ==1){
    printf("The minnimum Distance between %d and %d is : %d",x,y,distance);
    }
    return 0;
}
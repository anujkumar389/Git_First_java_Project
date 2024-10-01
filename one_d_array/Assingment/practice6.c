 #include<stdio.h>
 int main(){
    int size;
    printf("Enter size :");
    scanf("%d",&size);
    int arr [size];
    printf("Enter Element :");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    int index1,index2;
    printf("Enter 1st index :");
    scanf("%d",&index1);
    printf("Enter 2nd index :");
    scanf("%d",&index2);
    int c=0;
    for(int i=index1;i<=index2;i++){
        c++;
    }
    for(int i=c;i>0;i--){
        
        for(int j=i;j<size;j++){
            arr[j]=arr[j==size-1?j:j+1];

        }
       
    }
    printf("new \n");
    for(int i=0;i<size-c;i++){
        printf("%d\n",arr[i]);
    }
 }
 #include<stdio.h>
 int main(){
    int size;
    printf("Enter size :");
    scanf("%d",&size);
    int arr[size];
    printf("Enter element :\n");
    for(int i=0;i <size;i++){
        scanf("%d",&arr[i]);
    }
    int count =0;
    for(int i=0;i<size;i++){//0,1,
        int check=1;
        for(int k=i-1;k>=0;k--){
            if(arr[i]==arr[k]){
                check=0;
            }
        }
        for(int j=i+1;j<size&&check==1;j++){//1,2,3,4,5(f)....2,3,4,5(f)
            if(arr[i]==arr[j]){//f,t,t,f...f,f,t
               ++count;//1,2,3
            }
        }
    }
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]==arr[j]){
                
                for(int k=j+1;k<size;k++){
                    if(arr[k]!=arr[j]){
                        arr[j]=arr[k];

                        break;
                    }
                }
                
            }
        }
    }
    printf("Updated array :\n");
    for(int i=0;i<size;i++){
        printf("%d\n",arr[i]);
    }
 }
#include<stdio.h>
int main(){
    int r,c;
    printf("Enter row and colume :");
    scanf("%d%d",&r,&c);
    int arr[r][c];
    int size=r*c;
    int checkArray[size];
    printf("Enter element :\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
   printf("Metrix\n");
   for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf(" %d",arr[i][j]);
        }
        printf("\n");
    }
    
    int index=0;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            int count=1;
            int check2=0;
            int check=1;
            for(int m=0;m<size;m++){
                if(i==0&&j==0){       
                break;
                }else{
                    if(checkArray[m]==arr[i][j]){
                        check=0;
                        break;      
                    }
                }
            }
            if(check==0){
                continue;
        
            }else{
            for(int k=i;k<r;k++){
                for(int l=i==k?j+1:0;l<c;l++){
                    
                    
                   
                    
                    if(arr[i][j]==arr[k][l]){
                        checkArray[index]=arr[i][j];
                        index++;
                        count++;
                        check2=1;
                    } 
                    
                   
                }
            }
            }
          if(check2==1){
            printf("%d is repeated ...count :%d\n",arr[i][j],count);
          }
            
        }
        
    }
    
    return 0;
}

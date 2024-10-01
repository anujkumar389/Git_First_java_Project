#include<stdio.h>
int main(){
    int a;
    printf("Enter your no..=");
    scanf("%d",&a);
    if (a>90 && a<100)
    {
        printf("A grade");
    }else{
        if(a>=80 && a<=90){
            if (a>=85)
            {
                printf("grade A-");
            }else{
                printf("grade B+");
            }
            
        }else{
            if (a<80)
            {
                if (a>=70)
                {
                    printf("Grade C");
                }else{
                    printf("Grade D");
                }
                
            }
            
        }
    }
    return 0;
    
}
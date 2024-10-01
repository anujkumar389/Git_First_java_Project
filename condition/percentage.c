#include<stdio.h>
int main(){
    int roll;
    printf("enter your roll no..:");
    scanf("%d",&roll);
    int p;
    int c;
    int a;
    printf("enter your physics marks:");
    scanf("%d",&p);
    printf("enter your chemistry marks");
    scanf("%d",&c);
    printf("enter your computer marks");
    scanf("%d",&a);
    int sum=p+c+a;
    int percentage=(sum*100)/300;
    if ((percentage>=60)&& !(percentage>100))
    {
        printf("1st division");
    }else{
        if ((percentage>=45)&& !(percentage>=60))
        {
            printf("2nd division");
        }else{
            if ((percentage>=30)&& !(percentage))
            {
                printf("2nd division");
            }else{
                if ((percentage>=30)&& !(percentage>=45))
                {
                    printf("3rd division");
                }else{
                    if (percentage>30)
                    {
                        printf("fail");
                    }else{
                        printf("invalid input");
                    }
                    
                }
                
            }
            
        }
        
    }
    

}
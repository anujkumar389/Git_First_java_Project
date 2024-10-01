#include<stdio.h>
int main(){
    int member;
    printf("if you are member then enter '1' else enter '0'..=");
    scanf("%d",&member);
    int amount;
    printf("Enter your spending amount..=");
    scanf("%d",&amount);
    if ((member==1 && amount>=100)|| (member==0 && amount>=150))
    {
        if (member==1 && amount>=100) 
        {
            long long code;
            printf("enter your membership code..=");  //membership code is 101,105,9113170895
            scanf("%lld",&code);
            if (code==101||code==105||code==9113170895)
            {
                float discount= amount-(amount*0.10);
                printf("your discounted amount is %.2f",discount);
  
            }else{
                printf("Invilid membership code");
            }
            
        }else{
            float discount= amount-(amount*0.05);
            printf("your discounted amount is %f",discount);
        }
        
        
    }else{
        printf("Invilid input or you are not eligible for discount");
    }
    return 0;
}
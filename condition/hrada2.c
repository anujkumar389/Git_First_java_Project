#include<stdio.h>
int main(){
    int basicsalary;
    printf("enter your basic salary");
    scanf("%d",&basicsalary);
    int hra1=(18*basicsalary)/100;
    int da1=(80*basicsalary)/100;
    int hra2=(24*basicsalary)/100;
    int da2=(90*basicsalary)/100;
    int hra3=(27*basicsalary)/100;
    int da3=(95*basicsalary)/100;
    int gross1=hra1+da1+basicsalary;
    int gross2=hra2+da2+basicsalary;
    int gross3=hra3+da3+basicsalary;
    if (basicsalary%2==1 && basicsalary%2==0)
    {
        if (basicsalary<=10000)
    {
        printf("%d is your gross salary",gross1);
    }else{
        if (basicsalary<=25000 && basicsalary>10000)
        {
            printf("%d is your gross salary",gross2);
        }else{
            if (basicsalary>30000)
            {
                printf("%d is your gross salary",gross3);
            }else{
                printf("invalid input");
                }
            
        }
        
    }
    }else{
        printf("invalid input");
    }
    
    return 0;
}
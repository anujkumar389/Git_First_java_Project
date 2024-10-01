#include<stdio.h>
int main(){
    int basicsalary;
    printf("enter your basic salary :");
    scanf("%d",&basicsalary);
    int hra=(27*basicsalary)/100;
    int da=(95*basicsalary)/100;
    int gs=hra+da+basicsalary;
    int hra2=(24*basicsalary)/100;
    int da2=(90*basicsalary)/100;
    int gs2=hra2+da2+basicsalary;
    int hra3=(18*basicsalary)/100;
    int da3=(80*basicsalary)/100;
    int gs3=hra3+da3+basicsalary;
    
    if (basicsalary>=30000)
    {
        printf("%d is gross salary",gs);
        }
    else{
        if (basicsalary<=25000 && basicsalary>10000)
        {
            printf("%d is the gross salary",gs2);
        }else if (basicsalary<=10000)
        {
            printf("%d is the gross salary",gs3);
        }
        
        
    }
    
return 0;
}
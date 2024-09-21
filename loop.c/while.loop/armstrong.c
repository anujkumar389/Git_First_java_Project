#include<stdio.h>
int main(){
   int num;
   printf("Enter your no :");
   scanf("%d",&num);
   int count_quocent=num;
   int count=0;
   while (count_quocent>0)
   {
        count_quocent=count_quocent/10;
        count++;
   }
    
    int quocent=num;
    int remainder=0;
    int digit=count;
    int result=0;
   while(count>0){
        remainder=quocent%10;
        quocent=quocent/10;
        int sum=1;
        int digit2=0;
        while(digit>0){
            sum=sum*remainder;
            digit--;
            digit2++;
            
        }
        digit=digit2;
        result=result+sum;
        count--;
   }
    if(result==num){
        printf("%d is armstrong no %d",num,result);
    }else{
        printf("%d is not armstrong no ",num);
    }
    return 0;
   }
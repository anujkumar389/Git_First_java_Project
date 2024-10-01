#include<stdio.h>
int main(){
   printf("enter your integer :");
   long a;
   scanf("%ld",&a);
   switch (a%2)
   {
   case 0:
    printf("%ld is even number",a);
    break;
   case 1:
    printf("%ld is odd number",a);
    break;
   case -1:
    printf("%ld is odd number",a); 
    break;
   default:
    printf("invadid input");
    break;
   }
}
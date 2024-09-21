#include<stdio.h>
int main(){
    int a=65;
    while((a>='a'&& a<='z')){
       if(a>='A' && a<='Z' ){
       printf("%c\n",a);
       }
       if(a>='a' && a<='z' ){
        printf("%c\n",a);
       }
        a++;
    }
}
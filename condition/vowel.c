#include<stdio.h>
int main(){
    char x;
    printf("enter your alphabet");
    scanf("%c",&x);
    if (x=='a'||x=='e'||x=='i'||x=='o'||x=='u'||x=='A'||x=='E'||x=='I'||x=='O'||x=='U')
    {
        printf("%c is vowel",x);
    }else if ((x>='a'&& x<='z')||(x>='A'&& x<='Z'))
    {
        printf("%c is consonent",x);
    }else{
        printf("Invalid input");
    }
    return 0;
}
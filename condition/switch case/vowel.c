#include<stdio.h>
int main(){
    printf("Enter your alphabet\n");
    char x;
    scanf("%c",&x);
    switch (x=='a'||x=='e'||x=='i'||x=='o'||x=='u'||x=='A'||x=='E'||x=='I'||x=='O'||x=='U'?1:((x>='a'&& x<='z')||(x>='A'&&x<='Z'))?2:3)
    {
    case 1:
        printf("%c is vowel",x);
        break;
    case 2:
        printf("%c is consonent",x);
        break;
    case 3:
        printf("Invalid input1");
        break;
    default:
        break;
    }
    return 0;
}
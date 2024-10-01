// 5.Write a program to print individual characters of a string in reverse
// order.
// Input : string = Coding Age
// Output:
// The characters of the string are :
// e g A g n i d o C
#include<stdio.h>
#include<string.h>
int main(){
    char str[]={"Coding Age"};
    int size=strlen(str);
    for(int i=size;i>=0;i--){
        printf("%c",str[i]);
    }
    

return 0;
}

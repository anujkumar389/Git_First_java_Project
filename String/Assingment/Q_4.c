// 4.Write a program to separate individual characters from a string.
// Input : string = Coding Age
// Output:
// The characters of the string are :
// C o d i n g A g e
#include<stdio.h>
int main(){
    char str[]={"Coding Age"};
    printf("The charecters of the string are :");
    for(int i=0;str[i];i++){
        printf("%c ",str[i]);
    }

}
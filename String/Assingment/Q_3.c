// 3.Write a program to copy one string to another string .
// Input : String = Coding Age
// Output: Original string:Coding Age
// Copied string: Coding Age
#include<stdio.h>
int main(){

   char str[]={"Coding Age"};
    int size=0;
    for(int i=0;str[i];i++){
        size++;
    }
    char str2[size];
    printf("%d",size);
    for(int i=0;str[i];i++){
        str2[i]=str[i];
    }
    printf("Original String :");
    puts(str);
    printf("Copied String :");
    puts(str2);

    return 0;
}


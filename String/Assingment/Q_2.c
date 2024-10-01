// 2.Write a program to find length of a string without using library
// functions.
// Input : Coding Age Output: 10
#include<stdio.h>
int main(){
    char str[]={"Coding Age"};
    int size=0;
    for(int i=0;str[i];i++){
        size++;
    }
    printf("%d",size);
    return 0;

}
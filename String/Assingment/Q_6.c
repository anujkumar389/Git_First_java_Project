// 6.Write a program to count the total number of words in a string.
// Input : string = Coding Age
// Output: the total number of words in a string = 2
#include<stdio.h>
#include<string.h>
#include<limits.h>
#define MAX 50
int main(){
    char str[MAX];
    fgets(str,MAX,stdin);
    int a=INT_MAX;
    int b=INT_MIN;
    printf("max: %d,min %d",a,b);
    // int count=0;
    // int size=strlen(str);
    // // printf("Size : %d",size);
    // for(int i=0;str[i];i++){
    //     if(str[i]!=0&&i==0){
    //         count++;
    //     }else if(str[i]==' '&&i!=size-2){
    //         count++;
    //     }
    // }
    // printf("The total number of words in a string =%d",count);
    return 0;
}
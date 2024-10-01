// 9.Write a program to compare two strings without using string library
// functions.
// Ex 1.
// Input : string1 : Coding AGe
// Input : string2 : Cagers
// Output: Strings are not equal.
// Ex 2.
// Input : string1 : Cagers
// Input : string2 : Cagers
// Output: Strings are equal.
#include<stdio.h>
int main(){
    int size;
    printf("Enter size :");
    scanf("%d",&size);
    getchar();
    char str[size];
    fgets(str,size,stdin);
    int size2;
    printf("Enter 2nd Size :");
    // getchar();
    scanf("%d",&size2);
    getchar();
    char str2[size2];
    fgets(str2,size2,stdin);
    int check=0;
    for(int i=0;str[i];i++){
        if(str[i]!=str2[i]){
            printf("Strings are not equal.");
            return 0;
        }else{
            check=1;
        }
    }
    if(check==1){
        printf("Strings are equal.");
    }
    return 0;
}
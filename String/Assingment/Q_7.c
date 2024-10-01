// 7.Write a program to count the total number of vowels or consonants
// in a string.
// Input : string = vowels
// Output: the total number of vowels in a string = 2
// the total number of consonants in a string = 4
#include<stdio.h>
#define MAX 50
#include<string.h>
int main(){
    char str[MAX];
    fgets(str,MAX,stdin);
    int size=strlen(str);
    int vowel=0;
    int consonent=0;
    for(int i=0;i<size-1;i++){
        if(str[i]=='a'||str[i]=='A'||str[i]=='e'||str[i]=='E'||str[i]=='i'||str[i]=='I'||str[i]=='O'||str[i]=='o'||str[i]=='u'||str[i]=='U'){
            vowel++;
        }else if((str[i]>=65&&str[i]<=90)||(str[i]>=97&&str[i]<=122)){
            consonent++;
        }
    }
    printf("Vowel :%d ,Consonent %d",vowel,consonent);
    return 0;
}
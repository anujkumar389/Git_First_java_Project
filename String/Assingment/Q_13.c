// 13.Write a program to read a sentence and replace lowercase
// characters with uppercase and uppercase with lowercase characters .
// Input : string : This Is A String.
// Output: tHIS iS a sTRING.
#include<stdio.h>
#include<string.h>

int main(){
    int size;
    printf("Enter size :");
    scanf("%d",&size);
    size++;
    getchar();
    char str[size];
    fgets(str,size,stdin);
    int a=strlen(str);
    for(int i=0;i<a-1;i++){
        if(str[i]>='A'&&str[i]<='Z'){
            str[i]=str[i]+32;
        }else if(str[i]>='a'&&str[i]<='z'){
            str[i]=str[i]-32;
        }

    }
    puts(str);
    

}
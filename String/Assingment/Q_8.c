// 8.Write a C program to find the repeated character in a string.
// Input : string = Repeated
// Output: the Repeated character in a string = e
#include<stdio.h>
#define MAX 50
#include<string.h>
int main(){
    char str[MAX];
    fgets(str,MAX,stdin);
    int size=strlen(str);
    int check=1;
    for(int i=0;i<size-1&&check==1;i++){
        if(str[i]==' '){
            continue;
        }
        for(int j=i+1;j<size-1;j++){
            if(str[i]==str[j]){
                printf("The Repeted character in a string = %c",str[i]);
                check=0;
                break;
            }
        }
        
    }
    return 0;

}
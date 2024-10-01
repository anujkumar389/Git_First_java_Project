// 12.Write a program to check whether a string is palindrome or not
// Input : string = madam.
// Output: madam is Palindrome string.
#include<stdio.h>
int main(){
    int size;
    printf("Enter size :");
    scanf("%d",&size);
    size++;
    getchar();
    char str[size];
    fgets(str,size,stdin);
    int check =1;
    for(int i=0,j=size-2;i<size/2;i++,j--){
        if(str[i]!=str[j]){
            check=0;
        }
    }
    if(check==1){
        printf("%s is palindrome string",str);
    }else{
        printf("%s is not palindrome string",str);

    }
return 0;
}
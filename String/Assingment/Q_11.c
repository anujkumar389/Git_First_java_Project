// 11.Write a program to concatenate two strings in single string.
// Input : string1 : Coding Age
// Input : string2 : Cagers
// Output: Concatenated string: Coding AgeCagers
#include<stdio.h>
int main(){
    int size1,size2;
    printf("Enter 1st size :");
    scanf("%d",&size1);
    printf("Enter 2nd size :");
    scanf("%d",&size2);
    size1++;size2++;
    getchar();
    char str[size1];
    fgets(str,size1,stdin);
    getchar();
    printf("Enter element of 2nd String :");
    char str2[size2];
    fgets(str2,size2,stdin);
    int size3=size1+size2;
    char concatenate[size3];
    for(int i=0,j=0;i<size3;i++){
        if(i<size1-1){
            concatenate[i]=str[i];
        }else{
            // printf("i:%d , j:%c\n",i,str2[j]);
            concatenate[i]=str2[j];
            // printf("Con : %c\n",concatenate[i]);
            j++;
        }
    }
    // printf("%c",concatenate[10]);
    puts(concatenate);

return 0;
}
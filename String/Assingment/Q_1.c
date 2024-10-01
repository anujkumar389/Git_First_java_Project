// 1. Write a program to input a string and print it.
// Input : Coding Age Output : Coding Age
// #include<stdio.h>
// int main(){
//     char str[11];
//     fgets(str,11,stdin);
//     puts(str);
//     return 0;
// }
#include <stdio.h>
#define MAX 50
int main()
{
	char str[MAX];

	// MAX Size if 50 defined
	fgets(str, MAX, stdin);

	printf("String is: \n");

	// Displaying Strings using Puts
	puts(str);

	return 0;
}
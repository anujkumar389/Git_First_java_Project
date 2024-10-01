// 2. Write a program that defines a structure Book with members title, author,
// and price. Then, write functions to input and display the details of a book.
#include<stdio.h>
#include<string.h>
struct book{
    char member_title[20];
    char auther[20];
    int price;
}book1;
int input(){
    printf("Enter member title :\n");
    // getchar();
    fgets(book1.member_title,20,stdin);
    printf("Enter Author name : \n");
    // getchar();
    fgets(book1.auther,20,stdin);
    printf("Enter price :\n");
    scanf("%d",&book1.price);
    return 0;
}
void output(){
    printf("Member Title :");
    printf("%s\n",book1.member_title);
    printf("Auther : %s\n",book1.auther);
    printf("Price : %d\n",book1.price);
}
int main(){
    // struct book book1;
    input();
    output();

}
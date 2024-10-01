// 1. Write a C program to define a structure Person with members name, age,
// and address. Create an array of structures to store the details of 5 people
// and display them.
#include<stdio.h>
#include<string.h>
#define MAX 50
struct person
{
    char name[20];
    int age;
    char address[50];

};

int main(){
    struct person a[2];
    // strcpy(a[0].name, "Anuj");
    // a[0].age=19;
    // strcpy(a[0].address,"Patna");
    for(int i=0;i<2;i++){

        printf("Enter name :\n");

        // getchar();
        fgets(a[i].name,20,stdin);

        printf("Enter Age :\n");
        scanf("%d",&a[i].age);

        printf("Enter Address :\n");


        getchar();
        fgets(a[i].address,50,stdin);
    }
    for(int i=0;i<2;i++){

        printf("Name :");
        printf("%s",a[i].name);

        printf(" Age :");
        printf("%d\n",a[i].age);

        printf(" Address :");
        
        printf("%s",a[i].address);
    }

}
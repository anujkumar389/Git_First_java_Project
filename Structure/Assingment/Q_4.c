// Write a program to declare a structure Employee with members employee
// ID, name, salary, and department. Take input from the user for 3
// employees and display their details.
#include<stdio.h>
struct Employee{
    int employee_id;
    char name[20];
    int salary;
    char department[20];
};
int main(){
  struct Employee a[3];
  for(int i=0;i<3;i++){
    printf("Enter employee Id :\n");
    scanf("%d",&a[i].employee_id);
    printf("Emter name :\n");
    getchar();
    fgets(a[i].name,20,stdin);
    printf("Enter salary :\n");
    scanf("%d",a[i].salary);
    printf("Enter department :\n");
    getchar();
    fgets(a[i].department,20,stdin);
  }
}
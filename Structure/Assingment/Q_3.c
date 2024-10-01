// Create a structure Student that contains roll number, name, and marks of
// three subjects. Write a program to calculate the total and average marks
// of each student.
#include<stdio.h>
struct Student{
    int roll_no;
    char name[20];
    struct subject
    {
        int physics;
        int chemestry;
        int math;
    }marks;
    
};
void average(struct Student a[]){
    for(int i=0;i<2;i++){
        printf("Detail of %s \n",a[i].name);
        printf("total marks : %d\n",a[i].marks.physics+a[i].marks.chemestry+a[i].marks.math);
        printf("Average marks : %d\n",(a[i].marks.chemestry+a[i].marks.physics+a[i].marks.math)/3);
    }

}
int main(){
    struct Student a[2];
    for(int i=0;i<2;i++){
        printf("Enter roll no. :");
        scanf("%d",&a[i].roll_no);
        printf("Enter Name :\n");
        getchar();
        fgets(a[i].name,20,stdin);
        printf("Enter marks of physics :");
        scanf("%d",&a[i].marks.physics);
        printf("Enter marks of Chemistry :");
        scanf("%d",&a[i].marks.chemestry);
        printf("Enter marks of Math :");
        scanf("%d",&a[i].marks.math);
    }
    average(a);
    return 0;
}
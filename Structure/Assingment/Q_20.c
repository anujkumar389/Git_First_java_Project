// Create a structure Movie with title, director, and release year. Write a
// program to input data for 3 movies and display the details of the movie
// released the earliest
 #include<stdio.h>
 struct Movie{
    char title[20];
    char director[20];
    int release_year;
 };
 int main(){
 struct Movie a[3];
 for(int i=0;i<3;i++){
    printf("Enter Title :");
    getchar();

    fgets(a[i].title,20,stdin);
    printf("ENter Director name :");


    getchar();


    fgets(a[i].director,20,stdin);
    printf("ENter relesed date :");
    scanf("%d",&a[i].release_year);

    getchar();
 }
    int s=a[0].release_year;
    int index=0;
    for(int i=0;i<3;i++){
        if(a[i].release_year<s){
            s=a[i].release_year;
            index=i;
        }
    }
    printf("The earliest relesed movie :\n");

    printf("Title : %s\n",a[index].title);
    printf("Director name : %s\n",a[index].director);
    printf("Relesed year : %d\n",a[index].release_year);
return 0;

 }
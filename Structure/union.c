#include<stdio.h>
union anuj{
    char b;
    float c;
    int a;
};
int main(){
    union anuj var;
    var.b='A';
    printf("Int :%d\n",var.a);
    printf("char :%c\n",var.b) ;
    printf("float :%f\n",var.c);
    return 0;
}
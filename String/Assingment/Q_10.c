// // 10.Write a program to count the total number of alphabets, digits and
// // special characters in a string.
// // Input : string = Codingage123@gmail.com
// // Output:
// // Number of Alphabets in the string is : 17
// // Number of Digits in the string is : 3
// // Number of Special characters in the string is : 2
 #include<stdio.h>
 #include<string.h>
 int main(){
     int size;
     printf("Enter size :");
     scanf("%d",&size);
     size++;
     char str[size];
     getchar();
     fgets(str,size,stdin);
     int a=strlen(str);
     printf("Updated size :%d\n",a);
     printf("%c", str[2]);

   //   int alpha=0;
   //   int num=0;
   //   int special_char=0;
   //   for(int i=0;i<a;i++){
   //    if(str[i]>='0'&&str[i]<='9'){
   //       num++;
   //    }else if((str[i]>='A'&&str[i]<='Z')||(str[i]>='a'&&str[i]<='z')){
   //       alpha++;
   //    }else{
   //       special_char++;
   //    }
   //   }
   //   printf("Alphabets :%d ,Number :%d , Special Characters :%d ",alpha,num,special_char);
     return 0;
 }

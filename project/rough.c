#include<stdio.h>
#include<string.h>
int main(){
    char alpha[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'}
    char capital_alpha[26]={'.-'}
    int size;
    printf("Enter string size");
    scanf("%d",&size);
    getchar();
    char str[size];
    fgets(str,size,stdin);
    int length=strlen(str);
    for(int i=0;i<length;i++){
        if(str[i]>='A'&&str[i]<'Z'){
            switch (str[i])
            {
            case /* constant-expression */:
                /* code */
                break;
            
            default:
                break;
            }
        }

    }

    return 0;
}
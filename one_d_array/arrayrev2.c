#include <stdio.h>

int main(){
    int a;
    scanf("%d", &a);

    int arr[a];
    for(int i = 0;a>i;i++){
        scanf("%d", &arr[i]);
    }
    int n = a-2;
    int m;

    if(n%2==0){
        m = n/2;
    }
    else{
        m = n/2 +1;
    }
    int l;
    l= m+1;
    int o;
    if(n%2==0){
        o = n/2-1;        
    }
    else{
        o = n/2;
    }

    if(n%2!=0){
        for(int i = 0;o>=i;i++){
            int x= arr[l+i];
            int y= arr[l-i];
            arr[l+i]= y;
            arr[l-i]= x;

        }
    }
    else{
        for(int i = 0;o>=i;i++){
            int x = arr[l+i+1];
            int y = arr[l-i];
            arr[l+i+1]= y;
            arr[l-i]= x;
        }
    }
    for(int i = 0;a>i;i++){
        printf("%d", arr[i]);
    }

}
#include<stdio.h>


int main(){

    int a,b;
    
    printf("enter number 1: ");
    scanf("%d", &a);
    printf("enter number 2: ");
    scanf("%d", &b);


    printf("before swaping a=%d\n",a);
    printf("before swaping b=%d\n",b);
    a=a+b;
    b=a-b;
    a=a-b;

    
    printf("after swaping a=%d\n",a);
    printf("after swaping b=%d\n",b);


    return 0;
}
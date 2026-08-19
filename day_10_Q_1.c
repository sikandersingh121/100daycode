#include<stdio.h>

int main(){

    int a,b,c;

    printf("enter side A: ");
    scanf("%d",&a);
    printf("enter side B: ");
    scanf("%d",&b);
    printf("enter side C: ");
    scanf("%d",&c);

    if((a==b)&&(b==c)){
        printf("triangle is equilateral ");
    }
    else if((a==b)&&(b!=c)){
        printf("triangle is isosceles with (a=b)");
    }
    else if((a!=b)&&(b==c)){
        printf("triangle is isosceles with (b=c)");
    }
    else if((a!=b)&&(a==c)){
        printf("triangle is isosceles with (c=a)");
    }
    else{
        printf("triangle is scalene");
    }



    return 0;
}
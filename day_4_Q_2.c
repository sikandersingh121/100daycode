#include<stdio.h>

int main(){

    float a;

    printf("entre the value of n(n is number of first natural number)");
    scanf("%f",&a);

    int d=a;

    float b= (a+1)/2;
    int c= b*a;

    printf("sum of first %d natural numbers is %d",d ,c);

    return 0;
}
// Q54 (Nested Loops without Arrays/Strings)
// 📋
// Write a program to print the following pattern:

//    *
//   ***
//  *****
// *******
//  *****
//   ***
//    *

#include<stdio.h>

int main(){

    for(int i=1;i<=7;i+=2){
        for(int a=7;a>i;a-=2){
            printf(" ");
        }
        for(int j=1;j<=i;j++){
            printf("*");
        }
        printf("\n\n");
    }
    for(int i=5;i>=1;i-=2){
        for(int a=5;a>=i;a-=2){
            printf(" ");
        }
        for(int j=1;j<=i;j++){
            printf("*");
        }
        printf("\n\n");
    }


    return 0;
}
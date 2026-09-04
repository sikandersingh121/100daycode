// Q52 (Nested Loops without Arrays/Strings)
// 📋
// Write a program to print the following pattern:

// *

// *
// *
// *

// *
// *
// *
// *
// *

// *
// *
// *

// *

#include<stdio.h>

int main(){
for(int i=1;i<=5;i+=2){
    for(int a=1;a<=i;a++){
        printf("*\n");
    }
    printf("\n");
   
}
for(int i=1;i<=3;i+=2){
    for(int a=3;a>=i;a--){
        printf("*\n");
    }
    printf("\n");
}



    return 0;
}
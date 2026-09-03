// Write a program to print the following pattern:
// *****
//  ****
//   ***
//    **
//     *

#include<stdio.h>

int main(){

    for(int i=5;i>0;i--){
        
        for(int j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
        for(int a=5;(a>=i&&i>1);a--){
            printf(" ");
        }
    }



    return 0;
}
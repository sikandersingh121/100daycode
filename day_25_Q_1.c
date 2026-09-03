// Write a program to print the following pattern:
// 5
// 45
// 345
// 2345
// 12345


#include<stdio.h>
int main(){


    for(int i=5;i>0;i--){
        int a =i;
        for(int j=5;j>=a;a++){
            printf("%d",a);
        }
     printf("\n");
    }


    return 0;
}
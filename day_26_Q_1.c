// Q51 (Nested Loops without Arrays/Strings)
// 📋
// Write a program to print the following pattern:
//     5
//    45
//   345
//  2345
// 12345

#include<stdio.h>

int main(){
    for(int i=5;i>0;i--){
        for(int x=1;x<i;x++){
            printf(" ");
        }
        int a=i;
        for(int j=5;j>=i;j--){
            printf("%d",a);
            a++;
        }
        printf("\n");
    }




    return 0;
}
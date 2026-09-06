// Q55 (Nested Loops without Arrays/Strings)
// 📋
// Write a program to print all the prime numbers from 1 to n.

#include<stdio.h>

int main(){

    int n;
    printf("enter the value of n:");
    scanf("%d",&n);

    for(int i=3;i<=n;i++){
        int a;
        for(int j=2;j<i;j++){
            if(i%j==0){
              a=i;
                break;
            }
            
        }
        if(a!=i){
            printf("%d ",i);

        }


        
    
    }




    return 0;
}
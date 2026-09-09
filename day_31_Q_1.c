// Q61 (Arrays (1D))
// 📋
// Search for an element in an array using linear search.

#include<stdio.h>

int element(int arr[],int size,int a){
    int b=0;
    for(int i=0;i<size;i++){
    if(arr[i]==a){
        b=i;
        return b;
    }
   
    }
    return -1;
}

int main(){
    int size; 
    printf("enter the size of arry: ");
    scanf("%d",&size);
    
    int arry[size];
    
    
    for(int i=0;i<size;i++){
        printf("enter arr[%d]: ",i);
        scanf("%d",&arry[i]);
    }
    int a;
    printf("enter the element to be found: ");
    scanf("%d",&a);
    int index = element(arry,size,a);


    if(index>=0){
    printf("element is at arry[%d]",index);
    }

    else{
        printf("%d",index);
    }






    return 0;
}
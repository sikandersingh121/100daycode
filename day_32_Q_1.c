// Q63 (Arrays (1D))
// 📋
// Merge two arrays.

#include<stdio.h>

void merge(int arr1[],int arr2[],int size1,int size2){
    int size = size1 + size2;
    int arr[size];
    int a=0;
    for(int i=0;i<size1;i++){
        arr[i]=arr1[i];
        a++;
    }
    for(int i=0;i<size2;i++){
        arr[a]=arr2[i];
        a++;
    }
    printf("[ ");
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    printf("]");
    

}
    

int main(){

    int size1,size2;
    printf("enter the size of first arry1: ");
    scanf("%d",&size1);
    
    
    int arr1[size1];
    
    for(int i=0;i<size1;i++){
        
        printf("enter the value of arr1[%d]: ",i);
        scanf("%d",&arr1[i]);
    }
    printf("enter the size of second arry2: ");
    scanf("%d",&size2);
    int arr2[size2];
    for(int i=0;i<size2;i++){
    
        printf("enter the value of arr2[%d]: ",i);
        scanf("%d",&arr2[i]);
    }
    
    merge(arr1,arr2,size1,size2);
    





    return 0;
}
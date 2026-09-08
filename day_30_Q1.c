// Q60 (Arrays (1D))
// 📋
// Count positive, negative, and zero elements in an array.



#include<stdio.h>

int count(int arr[],int n,int *zero){
    int positive =0;
    int a=0;
    for(int i=0;i<n;i++){
        if(arr[i]>0){
            positive++;
        }
        else if(arr[i]==0){
            a++;
        }
        
        *zero=a;
    }
    return positive;
}

int main(){

    int size;
    printf("enter the size of arry: ");
    scanf("%d",&size);
    int arr[size];


    

    for(int i=0;i<size;i++){
        printf("enter the value of arr[%d]",i);
        int a;
        scanf("%d",&a);
        arr[i]=a;
    }
    int zero=0;

    int positive=count(arr,size,&zero);

    int negative=size -(positive+zero);

    printf("number of positive values: %d\nnumber of negative values: %d\nnumber of zero: %d",positive,negative,zero);



    return 0;
}
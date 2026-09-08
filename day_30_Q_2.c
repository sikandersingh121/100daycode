// Q59 (Arrays (1D))
// 📋
// Count even and odd numbers in an array.


#include<stdio.h>

int count(int arr[],int n){
    int even =0;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            even++;
        }
        
    }
    return even;
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

    int even=count(arr,size);

    int odd=size -even;

    printf("number of even values: %d\nnumber of odd values: %d",even,odd);



    return 0;
}
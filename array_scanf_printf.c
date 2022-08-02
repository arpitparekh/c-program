#include<stdio.h>


int main(){

    
    //  0 .... 4

    // arr[0] arr[1] arr[2] arr[3] arr[4]

    int size;

    printf("Enter Size of Array\n");

    scanf("%d",&size); // 10

    int arr[size];  // int arr[10];

    printf("Enter Values in Array\n");

    for(int i=0;i<size;i++){
        
        scanf("%d",&arr[i]);

    }

    printf("\nYour Array is :\n");

    for(int i=0;i<size;i++){

        printf("arr[%d] = %d\n",i,arr[i]);

    }

}
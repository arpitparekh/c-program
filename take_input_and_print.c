#include<stdio.h>

int main(){

    int size;

    printf("enter the size \n");

    scanf("%d",&size);

    // empty array

    int arr[size];  // declare

    printf("Enter %d Value inside Array\n",size);

    // 0 / 1 /2 /3 /4 / 5

    for(int i=0;i<size;i++){     // take input from user

        // i => 0..5

        scanf("%d",&arr[i]);  

    }

    /////////////////////////////////

    printf("\nYour array is \n");

    for(int i=0;i<size;i++){                // print the value
        
        printf("index is %d = [%d]\n",i,arr[i]);

    }

    return 33;
}
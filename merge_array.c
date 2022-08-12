#include<stdio.h>

int main(){

    // [1,4,5] 3 +  [1,6,5,4] 4

    // [1,4,5,1,6,5,4]  7

    printf("Enter Size of 2 array\n");

    int a,b;  // 3  // 4

    scanf("%d%d",&a,&b);


    int arr1[a];  //  3

    int arr2[b];  //  4

    int arr3[a+b]; // 7

    
    printf("Enter Value in first array\n");

    for(int i=0;i<a;i++){

        scanf("%d",&arr1[i]);

    }

    printf("Enter Value in second Array\n");

    for(int i=0;i<b;i++){

        scanf("%d",&arr2[i]);

    }

    for(int i=0;i<a;i++){  // 0  //  1 //  2

        arr3[i] = arr1[i];

    }

    for(int i=0;i<b;i++){  // 0 // 1 // 2 // 3

        arr3[i+a] = arr2[i];

    }

    printf("New Array is \n");

    for(int i=0;i<a+b;i++){

        printf("[%d] ",arr3[i]);

    }

    return 67;


    // [9,8,7,6,5] - [1,2,3,4,5] = [8,6,4,2,0]

    // arr3[1] = arr1[1] - arr2[1];

}
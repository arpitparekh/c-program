#include<stdio.h>

int main(){

    // sum of left diagonal of matrix in c

    // 1 1 // 2 2 // 3  3 // 

    printf("Enter the size of 2D metrix\n");

    int x;
    scanf("%d",&x);  // 3

    int arr[x][x];  //  3 *  3

    //  00 01  02
    //  10 11  12
    //  20 21  22   // 3*3   // odd  // 5*5  // 7*7

    // 00 01 02 03 04
    // 00 01 02 03 04
    // 00 01 33 03 04
    // 00 01 02 03 04
    // 00 01 02 03 04

    // 00 01  02  03
    // 10 11  12  13
    // 20 21  22  23
    // 30 31  32  33   // 4*4

    // 34
    // { { 23 } }  //  0 0 

    int sum=0;

    for(int i=0;i<x;i++){

        for(int j=0;j<x;j++){

            scanf("%d",&arr[i][j]);

        }
    }

    for(int i=0;i<x;i++){

        for(int j=0;j<x;j++){

            printf(" %d ",arr[i][j]);
        }

        printf("\n");
    }

    for(int i=0;i<x;i++){

        for(int j=0;j<x;j++){

           if((i+j) == (x-1) || i==j){  // 12

                sum = sum + arr[i][j];

           }

        }
    }

    // 3*3

    if(x%2!=0  && x!=1){  // odd  // 1*1 == x = 1

        sum = sum + arr[x-2][x-2];

    }

    printf("Sum of Diagonal of matrix is %d",sum);
    

    return 67;
}
#include<stdio.h>


int main(){

    printf("Enter the Size of 2 dimentional array\n");

    int x,y;
    scanf("%d%d",&x,&y);

    int arr[x][y];  // 3 * 3

    /*

        00  01  02
        10  11  12
        20  21  22

    */

    for(int i=0;i<x;i++){   // 0 // 1

        for(int j=0;j<y;j++){ // 0 / 1 / 2  3


            // 00  01  02
            // 10  11  12
            // 20  21  22

            scanf("%d",&arr[i][j]);


        }


    }

    for(int i=0;i<x;i++){   // 0 // 1 // 2

        printf("| ");

        for(int j=0;j<y;j++){ // 0  /1 // 2


            // 00  01  02
            // 10  11  12
            // 20  21  22

            printf("%d ",arr[i][j]);


        }

        printf("|\n");


    }



    return 56;
}
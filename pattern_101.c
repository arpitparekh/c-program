#include<stdio.h>


int main(){


    // * * * * *
    // * * * * *
    // * * * * *
    // * * * * *
    // * * * * *

    // 00 01 02
    // 10 11 12
    // 20 21 22

    // square pattern

    for(int i=1;i<=5;i++){  // 3

        for(int j=1;j<=5;j++){ // 1 2 3 4 5  // 1 2 3 4 5
        
            printf(" f ");

        }

        printf("\n");

    }

     printf("\n");

    // left triangle pattern

    for(int i=1;i<=5;i++){ // i = 5

        for(int k=4;k>=i;k--){
            printf(" ");
        }

        for(int j=1;j<=i;j++){

            printf(" *");

        }

        printf("\n");


    }


    //  * 
    //  * * 
    //  * * * 
    //  * * * * 
    //  * * * * *

    // * * * *
    // * * *
    // * *
    // *

    //  11
    //  21 22
    //  31 32 33
    //  41 42 43 44 

    printf("\n");


    for(int i=1;i<=5;i++){ // i = 5

        for(int j=5;j>=i;j--){ // 5 // 4 //

                printf(" * ");

        }

        printf("\n");

    }



    return 0;
}
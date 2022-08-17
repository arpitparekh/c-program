#include<stdio.h>

int main(){

    for(int i=1;i<=5;i++){  // i = 5


        for(int k=4;k>=i;k--){  // space

            // 3

            printf(" ");

        }


        for(int j=1;j<=i;j++){  // *  // 2

            printf("*");
        }

        printf("\n");

    }

    printf("\n");


    for(int i=1;i<=5;i++){  // i = 4




        for(int k=2;k<=i;k++){  // 3

            printf(" ");
        }


        for(int j=5;j>=i;j--){ 

            printf("*");


        }

        printf("\n");
    }


    printf("\n\n");\



    // pyramid

    printf("Enter size\n");

    int n;

    scanf("%d",&n);

    for(int i=1;i<=n;i++){  // 5


        for(int k=n-1;k>=i;k--){

            printf(" ");

        }

        for(int j=1;j<=(2*i)-1;j++){ // 1 // 3 // 5 // 7 // 9

            printf("*");

        }

        printf("\n");


    }


    return 23;
}
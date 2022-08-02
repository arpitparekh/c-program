// find reverse of number


#include<stdio.h>

int main(){

    int number = 45678;

    //  4 5 6 7 8  % 10

    //  8

    //  4 5 6 7 8 / 10

    // 4 5 6 7 % 10

    // 7

    // 4 5 6 7 / 10

    // 4 5 6 % 10

    // 6

    //  4 5 6 / 10

    // 4 5 % 10

    while(number!=0){   //  45678

        printf("%d",number%10);  // 8 // 7 // 6

        number = number/10;  // 456

    }

    return 0;
}
#include<stdio.h>


int main(){

    // 12345

    // 1234

    // 123

    // 12

    // 1

    // 0

    int number = 12345678;

    int n = 0;

    while(number!=0){  // 1234 // 123 // 12  //  1 

        number=number/10;

        n++;

    }

     printf("%d\n",number);

     printf("%d\n",n);  // n = 8

    return 56;
}
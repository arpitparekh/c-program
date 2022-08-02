// prime number  // 

// 1 is not a prime number  //

// 2 (even) // 3 // 5  // 7 // 11 // 13 // 17 ......

#include<stdio.h>

int main(){


    int number;

    printf("enter One Number\n");

    scanf("%d",&number);

    // 17 // 

    // 2...16  // divide

    // true => not prime
    // false => prime

    int x = 2;

    int result = 1;

    while(x<number){  // 2 // 3 // 7

        // 2<4
        // 2<7  // 2...6  // 2 3 4 5 6

        if(number%x == 0){ // 7%6  // 2..96

            // not a prime
           result = 2;
        }
        
        x++;
    }

    if(result==1){

        printf("Prime Number");

    }else{

        printf("Not Prime");
    }

    return 56;
}
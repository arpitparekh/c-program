#include<stdio.h>

// function is deivided in 4 parts

// function name
// function body
// function return type  //  before function ends
// function parameter  // is used to pass value inside function

void sum(){    
               // function declaration
    int a = 12;
    int b = 13;

    printf("\n%d\n",a+b);

}

int test(){

    return 555;
}

int main(){

    // function

    // function is a block of code that runs when we called it

    sum();  // if function has an error function will not call

    sum();

    // int number = test();

    // printf("%d\n",test());

    // printf("%d\n",number);


    int i = test() + test();

    printf("%d\n",i);

    return 56;
}
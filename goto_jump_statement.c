// goto statements

// break  // continue  // goto  // jump statements

#include<stdio.h>


int main(){

    int x;

    label:;

    printf("Enter Value\n");

    scanf("%d",&x);

    printf("Value is %d\n\n",x);

    goto label;

    return 67;
}
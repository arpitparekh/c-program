#include<stdio.h>

void myFunction(int g){

    // int g = 40;

    for(int i=1;i<=g;i++){

        printf(" %d ",i);
    }

    printf("\n");

}

int main(){

    // print first n natural number using a function

    int n;
    printf("Enter Value\n");

    scanf("%d",&n);  // 40

    myFunction(n);

    myFunction(20);

    myFunction(100);

    return 45;
}
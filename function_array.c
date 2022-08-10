#include<stdio.h>

int sum(int a,int b){  // user defined function

    // a = 10 , b = 20;

    // function can take any type of value inside its parameter

    // function can return any type of value

    printf("sum is %d\n",a+b);

}

void display(int arr[6]){

    for(int i=0;i<6;i++){

        printf("%d\n",arr[i]);

    }

}

int main(){

    sum(12,13);

    sum(10,20);

    sum(79,67);

    int numbers[] = {1,2,3,4,5,6};

    display(numbers);

    display(numbers);

    return 56;
}
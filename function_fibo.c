#include<stdio.h>

void fibo(int x){

    // int x = 50;

    long long int a = 1;
    long long int b = 1;

    for(int i=1;i<=x;i++){

        printf("%lld\n",a);

        long long int c = a+b;

        a = b;

        b = c;

    }

}

int main(){

    // 1 1 2 3 5 8 13

    printf("Enter the Total Range\n");

    int l; 

    scanf("%d",&l);


    fibo(l);  // 50


    return 56;
    
}
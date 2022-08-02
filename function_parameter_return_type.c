#include<stdio.h>


int mod(int a,int b){

    printf("Hello\n");

    return a%b; // 12

}

int main(){

    int result = mod(12,14);

    printf("%d\n",result);

    printf("%d",mod(45,12));

    return 56;
}
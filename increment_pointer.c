#include<stdio.h>

int main(){

    int a = 10;  // 4 bytes == 32 bits

    int* p = &a;  // declaration

    printf("%p\n",p);

    p++;

    printf("%p\n",p);

    p++;

    printf("%p\n",p);

    p++;

    printf("%p\n",p);

    printf("%d\n",*p);

    return 67;
}
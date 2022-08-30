#include<stdio.h>

int main(){

    // pointers

    // pointers stores the location of variables

    // pointer points to the location

    int x = 23;  // 0-9 A-F // 16

    int* p = &x;  // format spcifier %p

    printf("%d",x);

    printf("%p\n",p); // memory address  // location

    printf("%p\n",&x);

    printf("%p\n",&p);

    printf("%d\n",*p); // 23

    x = 45;

    printf("%d\n",*p);  // 45
    
    printf("%p\n",&*p); 

    // &x == &*p 

    printf("%p\n",*&p);

    

    return 0;
}
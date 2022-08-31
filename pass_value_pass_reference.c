// pass by value and pass by reference in C functions

#include<stdio.h>

void sum(int a,int b){   // pass by value

    // int a = 34;  // int b = 36;

    printf("sum is %d\n",a+b);

    a = 99;

}

void sum2(int* p1,int* p2){   // pass by reference

    // int* p1 = &x   // int* p2 = &y    // *p

    printf("sum is %d\n",(*p1)+(*p2));

    *p1 = 99;

}

int main(){

    int x = 34;
    int y = 36;

    sum(x,y);   // 70

    sum2(&x,&y);  // 70

    x = 10;
    y = 20;

    sum(x,y);     // 30
    sum2(&x,&y);  // 30

    printf("%d\n",x);

    return 56;
}

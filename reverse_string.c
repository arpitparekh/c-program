#include<stdio.h>
#include<string.h>

int main(){

    char str[100];

    printf("Enter String\n");

    gets(str);   // strrev()

    // banana  //   b  a  n | a  n  a   // 6/2  == 3
    //              0  1  2 | 3  4  5

    /////////////   a  n  a   n  a  b

    ////////////    h  e | l  l  o    //  5/2  =  2
    //              0  1 | 2  3  4

    //              o  l   l   e  h  '\0'- 1   //  // a-b = 
    // ananab

    //                            0 1 2 3 4    // temp = e  // 5
    int length = strlen(str);  // o l l e h

    for(int i=0;  i<length/2  ;i++){ // 0  /  1

            char temp = str[i];   
            str[i] = str[(length-i)-1];
            str[(length-i)-1] = temp;

    }

    // int x = 454545;

    // [4,5,4,5,4,5]


    // a  =12  // b = 13
    //  temp = a;
    //  a = b;
    //  b = temp;

    printf("\n");

    puts(str);

    return 50;

}
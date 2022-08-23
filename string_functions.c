// String functions
#include<stdio.h>
#include<string.h>

int main(){

    // strlen()  // length
    // strcpy()  // copy
    // strcmp()  // compare
    // strcat()  // concat

    // char name[30];

    // gets(name);

    // // strlen()

    // printf("length of the string is %ld",strlen(name));

    // // strcpy()

    // char data1[50];

    // gets(data1);

    // char data2[50];

    // strcpy(data2,data1);

    // puts(data2);

    ////////////////////////////

    // char str[] = "Hello";
    // char str2[] = "Hellu";

    // // strcmp() // 0  // give ASCII difference

    // printf("comparision of string is %d",strcmp(str,str2));

    /////////////////////////////////////////////////

    // strrev()

    // char data[50] = "Bhoomesh";

    // printf("%s",strrev(data));

    ////////////////////////////////////


    // strcat()  //    concatination

    // char s1[] = "Hi ";
    // char s2[] = "Bhoomesh";  // hsemoohb

    // strcat(s1,s2);

    // puts(s1);


    /////////////////////////////

    char d1[] = {'H','H','m','m','T','T','\0'};

    strlwr(d1);

    printf("%s",d1);


    return 67;
}
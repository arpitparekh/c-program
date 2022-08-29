#include<stdio.h>

int main(){

    // oopc  // object oriented programming concepts

    // find frequency of character

    // no of vowel in string  // aeiou ? 

    // bhoomesh  // 3

    char name[50];  // hello student\0

    printf("Enter String\n");

    gets(name);  // "hello"

    printf("Enter Character\n");

    // char ch; //  'l'  // 2  //    \0  

    // // every string ends with 

    // scanf("%c",&ch);

    int counter = 0;


    for(int i=0;  name[i]!='\0'  ; i++){

           if(name[i] == ' '){
                counter++;  // 2
           }
    }

    printf("Frequncy of character space is %d\n",counter);


    return 67;
}
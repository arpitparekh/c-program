#include<stdio.h>

int main(){

    // oopc  // object oriented programming concepts

    // find frequency of character

    char name[50];

    printf("Enter String\n");

    gets(name);  // "hello"

    printf("Enter Character\n");

    char ch; //  'l'  // 2  //    \0  

    // every string ends with 

    scanf("%c",&ch);

    int counter = 0;


    for(int i=0;  name[i]!='\0'  ; i++){

           if(name[i] == ch){

                counter++;  // 2

           }
    }

    printf("Frequncy of character %c is %d\n",ch,counter);


    return 67;
}
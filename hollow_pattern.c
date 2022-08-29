#include<stdio.h>

int main(){

    printf("Enter size..\n");

    int s;

    scanf("%d",&s);

    for(int i=1;i<=s;i++){

        for(int j=1;j<=i;j++){

            if(i==s || j==1 || i==j){
                printf("*");
            }else{
                printf(" ");
            }

        }

        printf("\n");

    }

    return 56;
}
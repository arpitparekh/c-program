#include<stdio.h>

int main(){


    for(int i=1;i<=5;i++){  // 3

        for(int j=5;j>=i;j--){  //  1

            printf("*");

        }

        for(int k= 2 ; k <= (2*i)-1 ;k++){  // space  // i =1  => 8  // 2 => 6  3=>4

            printf(" ");

        }

        for(int m=5;m>=i;m--){  //  1

            printf("*");

        }

        printf("\n");


    }

    ////////////////////////////////////////////////////////////////////////////////////

    for(int i=1;i<=5;i++){  // 5

        for(int j=1;j<=i;j++){  //  1

            printf("*");

        }

        for(int k= 8 ; k>= (2*i)-1 ;k--){  // space  // i =1  => 8  // 2 => 6  3=>4

            printf(" ");

        }

        for(int m=1;m<=i;m++){  //  1

            printf("*");

        }

        printf("\n");


    }


}
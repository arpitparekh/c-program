// fibonacci serice


//   1  1  2  3  5  8 13
//   x  y  z
//      x  y  z
//         x  y  z
//            x  y  z
//               x  y  z


#include<stdio.h>

int main(){
    
    int x = 1;
    int y = 1;
    

    for(int i=1;i<=5;i++){

        printf("%d\n",x);

        int z = x+y;  // 2 

        x = y;  // x = 1  

        y = z;  // y = 2 

          // 1

    }

    // for(int a=1;a<=10;a++){

    //     printf("%d\n",a);

    // }

    // a = 10


    return 56;
}
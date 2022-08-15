#include<stdio.h>

int main(){

    // one dimentional

    // int arr[] = {1,2,3,4,6};

    // int arr2[5];

    // two dimentioanl array

    int arr[7][2] = { {1,2} , {3,4} , {5,6} , {7,8} , {9,10} , {11,12} , {13,14}  };  // arr[0]

    //0  1  2  3  4  5   6   // index of an array

    int arr2[3][2];  // 6

    // {  {1,2} ,  {3,4}  , {5,6}  }  // matrix

    int arr3[7][2];

    for(int i=0;i<7;i++){ 

        // i  == 2
        
        for(int j=0;j<2;j++){  // j = 0  /  1
            
            printf(" [%d] ",arr[i][j]);  // arr[2][1]

        }
    

    }


    //  [3][2][3]  //  {  {  {  ,  ,  }  , {  ,   ,   }   }    ,  {   ,   }    ,  {   ,   }    }


    return 45;

}
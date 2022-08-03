#include<stdio.h>


int main(){

    int arr[] = {12,45,65,32,1000,11,67,55,99};   // 67

    // find a max element inside an array

    int max = 0; // 12
    int min = arr[0];

    for(int i=0;i<9;i++){

        if(arr[i]<min){ // 11 < 12

            min = arr[i];
        }
        
            ////////////////////////////////

        if(arr[i]>max){

            max = arr[i];

        }
    }


    printf("\nMin element inside array is %d\n",min);
    printf("Max element inside array is %d\n",max);



    return 56;
}
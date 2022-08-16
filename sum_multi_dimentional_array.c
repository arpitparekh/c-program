#include<stdio.h>

int main(){
    
    int a,b;
    int sum=0;
    printf("enter the value of two dimensional array a and b\n");
    scanf("%d%d",&a,&b);   // 2

    int arr1[a][b];    // int arr1[2][4]  // 2* 2 // 3 * 3 // 3 * 2
    int arr2[a][b];    // int arr2[2][4]

    for(int i=0;i<a;i++){  // 2 * 3
        
        for (int j=0;j<b;j++){
            
             scanf("%d",&arr1[i][j]);
        }
        
       
    }
    
     for(int i=0;i<a;i++){
        
        for(int j=0;j<b;j++){

            printf("%d ",arr1[i][j]);

        }

        printf("\n");
        
    }
    
    for(int i=0;i<a;i++){
        
        for(int j=0;j<b;j++){

            scanf("%d",&arr2[i][j]);

        }
        
        
    }
    
     for(int i=0;i<a;i++){
        
        for(int j=0;j<b;j++){

            printf("%d ",arr2[i][j]);

        }

        printf("\n");

    }

    printf("Sum of 2 array is \n");

    for(int i=0;i<a;i++){
        
        for(int j=0;j<b;j++){


           printf("%d ",(arr1[i][j]+arr2[i][j]));

        }

        printf("\n");



    }


    return 90;
}
#include<stdio.h>
#include<stdlib.h>


int main(){

    // dynamic memory allocation

    // reserve some memory space for future use is called dynamic memory allocation

    // int arr[5];  // 20 bytes

    // malloc()   // memory allocation
    // calloc()   // contigious allocation
    // free()
    // realloc()  // re - allocation

    int size;
    printf("Enter the size to Reserve in Memory\n");
    scanf("%d",&size);

    int* ptr;   // null

    // 4  // int   // 16 bytes

    ptr=(int*)malloc(size*sizeof(int));   // malloc return the NULL pointer

    // 10  // 12


    for(int i=0;i<size;i++){  // 0  // 1  // 2  // 3

        printf("%p\n",ptr+i);

    }

    printf("Values inside those location is\n");

    for(int i=0;i<size;i++){  // 0  // 1  // 2  // 3

        printf("[%p] = %d\n",ptr+i,*(ptr+i));

    }

    printf("Enter Values in Those Location\n");

    for(int i=0;i<size;i++){  // 0  // 1  // 2  // 3

        scanf("%d",ptr+i);

    }

    printf("Values inside those location is\n");

    for(int i=0;i<size;i++){  // 0  // 1  // 2  // 3

        printf("[%p] = %d\n",ptr+i,*(ptr+i));

    }

    ///////////////////////////////////////////////////////////////

    // realloc()

    // 5 // 1 2 3 4 5  // 1 2 3 4 5  // [] [] [] [] [] []

    ptr=realloc(ptr,6*sizeof(int));

    for(int i=0;i<6;i++){  // 0  // 1  // 2  // 3

        printf("%p\n",ptr+i);

    }


    return 56;
}
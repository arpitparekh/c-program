#include<stdio.h>
#include<stdlib.h>


int main(){


    // dynamic memory allocation

    printf("Enter the space to occupy\n");

    int size;

    scanf("%d",&size);  // 5

    int* ptr;

    ptr =(int*)calloc(size,sizeof(int));

    printf("Your Reserved Locations are\n");

    for(int i=0;i<size;i++){

        printf("%p\n",ptr+i);

    }

    printf("Enter Values in those Location\n");

    for(int i=0;i<size;i++){

        scanf("%d",ptr+i);

    }

    printf("Your Entered Values are\n");

    for(int i=0;i<size;i++){

        printf("[%p] = %d\n",ptr+i,*(ptr+i));

    }

    ////////////////////////////////////////////////////////////////

    printf("Enter New Size\n");

    int newSize;

    scanf("%d",&newSize);

    ////////////////////////////////////////////////

    // realloc()

    ptr=realloc(ptr,newSize*sizeof(int));

    //////////////////////////////////////////////

    printf("new Locations are\n");

    for(int i=0;i<newSize;i++){

        printf("%p\n",ptr+i);

    }

    //////////

    printf("Value inside those locations are\n");

    for(int i=0;i<newSize;i++){

        printf("[%p] = %d\n",ptr+i,*(ptr+i));

    }

    printf("Add Value in new Locations\n");

    for(int i=size;i<newSize;i++){  // 5  // 7

        scanf("%d",ptr+i);

    }

    printf("All the Values\n");

    for(int i=0;i<newSize;i++){

        printf("[%p] = %d\n",ptr+i,*(ptr+i));

    }

    /////////////////////////////////////

    free(ptr);   // free all the location and values

    printf("All the Values\n");

    for(int i=0;i<newSize;i++){

        printf("[%p] = %d\n",ptr+i,*(ptr+i));

    }







    return 56;
}
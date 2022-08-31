#include<stdio.h>


int main(){

    jump:;

    int a,b; 

    printf("Enter Two Values\n");

    scanf("%d%d",&a,&b);  // 10/20
    
    printf("\nChoose One\n");
    printf("\n1: Sum\n2: Sub\n3: Multi\n4: Div\n5: Exit\n\n");

    int choice;  // 1 // 2 // 3 // 4 // 5

    scanf("%d",&choice);

    switch(choice){

        case 1:
            printf("Sum is %d\n",a+b);
            break;
        case 2:
            printf("Sub is %d\n",a-b);
            break;
        case 3:
            printf("Multi is %d\n",a*b);
            break;
        case 4:
            printf("Div is %d\n",a/b);
            break;
        case 5:
            exit(0);
            break;
        default:
            printf("Choose Proper\n");        

    }

    goto jump;

    return 78;

}
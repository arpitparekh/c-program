#include<stdio.h>

int chai=0;
int coffee=0;
int sandwich=0;
int parleG=0;

void printMenu(){

    printf("-------------------Ash Da Dhaba---------------\n");
    printf("1) Chai       :   30\n2) Coffee     :   30\n3) Sandwich   :   50\n4) Parle-G    :   10\n");
    printf("----------------------------------------------\n");

}

void placeOrder(){

    printf("----------------------------------------------\n");

    printf("1) Place Order\n2) Show Bill\n3) Show Menu\n4) Exit\n");

    printf("----------------------------------------------\n");

    int x;

    scanf("%d",&x);

    switch(x){

    case 1:

    int orderNumber;

    printf("\nEnter item Number\n");

    scanf("%d",&orderNumber);

    switch(orderNumber){

        case 1:
            printf("Enter quantity\n");
            int a;
            scanf("%d",&a);
            chai=(chai+1)*a;
            printf("You Ordered %d chai\n",chai);
            placeOrder();
            break;
        case 2:
            printf("Enter quantity\n");
            int b;
            scanf("%d",&b);
            coffee=(coffee+1)*b;
            printf("You Ordered %d coffee\n",coffee);
            placeOrder();
            break;
        case 3:
            printf("Enter quantity\n");
            int c;
            scanf("%d",&c);
            sandwich=(sandwich+1)*c;
            printf("You Ordered %d sandwich\n",sandwich);
            placeOrder();
            break;
        case 4:
            printf("Enter quantity\n");
            int d;
            scanf("%d",&d);
            parleG=(parleG+1)*d;
            printf("You Ordered %d ParleG\n",parleG);
            placeOrder();
            break;
        default:
            printf("Please Choose Proper Order\n");
            placeOrder();
        }
        case 2:
            printf("1) Chai       :   %d\n2) Coffee     :   %d\n3) Sandwich   :   %d\n4) Parle-G    :   %d\nTotal      :      %d\n",(chai*30),(coffee*30),(sandwich*50),(parleG*10),(chai*30)+(coffee*30)+(sandwich*50)+(parleG*10));
            placeOrder();
            break;
        case 4:
            exit(0);
        case 3:
            printMenu();
            placeOrder();
        default:
            printf("Please Choose Proper Number\n");
            placeOrder();

    }

    

}

int main(){

    printMenu();

    placeOrder();

    return 56;

}


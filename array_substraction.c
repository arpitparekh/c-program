#include<stdio.h>

int main(){
	

	int arr1[5];
	int arr2[5];
	
	printf("enter the value of an array\n");
	
	for(int i=0;i<5;i++){
		
		scanf("%d",&arr1[i]);
	}
	
	for(int i=0;i<5;i++){
		
		scanf("%d",&arr2[i]);
	}
	
	int arr3[5];
	
	for(int i=0;i<5;i++){
		
		arr3[i]= arr1[i]-arr2[i];

        printf("%d ",arr3[i]);

    }

    return 0;


	
}
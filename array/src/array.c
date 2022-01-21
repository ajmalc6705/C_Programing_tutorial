/*
 ============================================================================
 Name        : array.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int limit,i, a[100];
	printf("Enter the array Limit :");
	scanf("%d",&limit);
	printf("Enter the values :");
//	Store the vallues into the array
	for(i=0;i<limit;i++){
		scanf("%d" ,&a[i]);
	}
	printf("The Enterd values are : ");
//	Just print the array values
	for(i=0;i<limit;i++){
		printf("%d,",a[i]);
	}

	return EXIT_SUCCESS;
}

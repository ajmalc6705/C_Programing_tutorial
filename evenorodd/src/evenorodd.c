/*
 ============================================================================
 Name        : evenorodd.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n;
	printf("Enter a number to check it is even or Odd :"); /* prints !!!Hello World!!! */
	scanf("%d",&n);
	if(n%2==0){
		printf("The number is Even ");
	}else{
		printf("The Number %d  is a odd number ",n);
	}
	return EXIT_SUCCESS;
}

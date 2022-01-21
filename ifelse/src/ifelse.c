/*
 ============================================================================
 Name        : ifelse.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a;
	printf("Enter A Number :"); /* prints !!!Hello World!!! */
	scanf("%d",&a);
	if(a<0){
		printf("The number is negative");
	}else{
		printf("the number is positive");
	}
	return EXIT_SUCCESS;
}

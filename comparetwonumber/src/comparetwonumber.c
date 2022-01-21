/*
 ============================================================================
 Name        : comparetwonumber.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num1,num2;
	printf("Enter Two number :"); /* prints !!!Hello World!!! */
	scanf("%d%d",&num1,&num2);
//	printf("Enter the second number");
//	scanf("%d",&num2);
	if(num1>num2){
		printf("The Greatest number is %d",num1);
	}else{
		printf("The Greatest number is %d",num2);
	}
	return EXIT_SUCCESS;
}

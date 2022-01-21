/*
 ============================================================================
 Name        : assignment2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num1;
	float num2,sum;
	printf("Enter number 1 :");
	scanf("%d",&num1);
	printf("Enter number 2 :");
	scanf("%f",&num2);
	printf("You entered number is \n  %d , %f ",num1,num2);
	sum = num1+num2;
	printf("Sum of the two number is %f",sum);

	return EXIT_SUCCESS;
}

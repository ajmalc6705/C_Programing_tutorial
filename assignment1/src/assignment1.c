/*
 ============================================================================
 Name        : assignment1.c
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
	float num2;
	char a;
	printf("Enter your name : \t");
	scanf("%c",&a);
	prinft("Enter a Number :");
	scanf("%d",&num1);
	printf("Enter the second number");
	scanf("%f",&num2);
	printf("You Entered name is %c",a);
	printf("You Entered number is %d",num1);
	printf("You Entered second number is %f",num2);

	return EXIT_SUCCESS;
}

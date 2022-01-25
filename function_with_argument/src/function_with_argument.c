/*
 ============================================================================
 Name        : function_with_argument.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
// Function With argument without return value
void sum(int,int);
int main(void) {
	int a, b;
	printf("Enter Two Numbers :"); /* prints !!!Hello World!!! */
	scanf("%d%d",&a,&b);
	sum(a,b);
	return EXIT_SUCCESS;
}

void sum(int num1,int num2){
	int c;
	c = num1+num2;
	printf("Sum is :%d",c);
}

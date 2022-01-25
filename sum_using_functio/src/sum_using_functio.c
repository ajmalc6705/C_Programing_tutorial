/*
 ============================================================================
 Name        : sum_using_functio.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void sum();/*To declare the function*/
int main(void) {
	sum();// Call the Funcyion
	//printf("!!!Hello World!!!");
	/* prints !!!Hello World!!! */
	return EXIT_SUCCESS;
}
// Define the function
void sum(){
	int a,b,c;
	printf("Enter Two numbers : ");
	scanf("%d%d",&a,&b);
	c = a+b;
	printf("Sum of Two numbers is : %d",c);
}

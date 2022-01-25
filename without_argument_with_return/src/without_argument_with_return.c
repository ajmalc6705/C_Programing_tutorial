/*
 ============================================================================
 Name        : without_argument_with_return.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int sum();
int main(void) {
	int res;
	res = sum();
	printf("Sum is %d",res); /* prints !!!Hello World!!! */
	return EXIT_SUCCESS;
}

int sum(){
	int a,b,c;
	printf("Enter Two Numbers :");
	scanf("%d%d",&a,&b);
	c = a +b;
	return c;

}

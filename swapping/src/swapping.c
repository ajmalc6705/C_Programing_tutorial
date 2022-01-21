/*
 ============================================================================
 Name        : swapping.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
//	int a=10,b=20,temp;
//	temp =a ;
//	a=b;
//	b=temp;
//	printf("a;%d b:%d",a,b); /* prints !!!Hello World!!! */
//	return EXIT_SUCCESS;
	int a,b,temp;
	printf("Enter Two values want to swap: \t");
	scanf("%d%d",&a,&b);
	temp=a;
	a=b;
	b=temp;
	printf("Swaping is completed the values are a:%d and b:%d",a,b);
	return EXIT_SUCCESS;

}

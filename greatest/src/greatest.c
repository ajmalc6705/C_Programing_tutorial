/*
 ============================================================================
 Name        : greatest.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a,b,c;
	printf("Enter 3 number"); /* prints !!!Hello World!!! */
	scanf("%d%d%d",&a,&b,&c);
	if(a>b){
		printf("Greatest Number is %d",a);
	}else if(b>c){
		printf("Greatest number is %d",b);
	}else{
		printf("Greatest number is %d",c);
	}

	return EXIT_SUCCESS;
}

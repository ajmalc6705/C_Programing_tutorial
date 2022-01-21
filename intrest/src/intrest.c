/*
 ============================================================================
 Name        : intrest.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int P;
	float R,n,SI;
	printf("Enter Principle Amount:");
	scanf("%d",&P);
	printf("Intrest Rate :\t");
	scanf("%f",&R);
	printf("No.of Year :\t");
	scanf("%f",&n);
	SI = ((P*R*n)/100);
	printf("interest Amount is %f", SI);

	return EXIT_SUCCESS;
}

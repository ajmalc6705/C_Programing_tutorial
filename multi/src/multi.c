/*
 ============================================================================
 Name        : multi.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int l,n,i,r;
	printf("Enter The Limit :"); /* prints !!!Hello World!!! */
	scanf("%d",&l);
	printf("Enter the Number :");
	scanf("%d",&n);
	for(i=1;i<=l;i++){
		r = (i*n);
		printf("%d x %d = %d\n",i,n,r);

	}
	return EXIT_SUCCESS;
}

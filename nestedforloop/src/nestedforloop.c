/*
 ============================================================================
 Name        : nestedforloop.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int l,i,j;
	printf("Enter a limit :"); /* prints !!!Hello World!!! */
	scanf("%d",&l);
	for(i=1;i<=l;i++){

		for(j=0;j<i;j++){

			printf(" * ");
		}
		printf("\n");
	}
	return EXIT_SUCCESS;
}

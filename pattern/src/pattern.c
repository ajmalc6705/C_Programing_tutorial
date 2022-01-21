/*
 ============================================================================
 Name        : pattern.c
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
	printf("Enter The Limit :"); /* prints !!!Hello World!!! */
	scanf("%d",&l);
	for(i=1;i<l;i++){
//		printf("%d",i);
		for(j=0;j<i;j++){
			printf("%d",j);

		}
		printf("\n");

	}
	return EXIT_SUCCESS;
}

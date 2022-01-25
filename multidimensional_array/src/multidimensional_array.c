/*
 ============================================================================
 Name        : multidimensional_array.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a[3][3],i,j;
	printf("Enter the Values :"); /* prints !!!Hello World!!! */
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d",&a[i][j]);
		}
	}

	printf("Entered Values are :\n");

	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d \t",a[i][j]);
		}
//		1 2 3 4 5 6 7 8 9
		printf("\n");
/*1 2 3
 * 4 5 6
 *7 8 9 */
//	before it printed as a single line we want to print like a matrix
	}

	return EXIT_SUCCESS;
}

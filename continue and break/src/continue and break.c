/*
 ============================================================================
 Name        : continue.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
//	Break
	int l,i,j;
	printf("Enter the Limit :");
	scanf("%d",&l);
	for(i=0;i<l;i++){
		printf("Hai");
		if(i==5){
			break;
		}
		printf("Break condition \n");
	}
	printf("break contition finished");

	printf("\n Continue condition started  \n");
	for(j=0;j<l;j++){

//			printf(j);
			printf(" Hai");
			if(j==5){
				continue;
			}
			printf("Continue condition \n");
		}
	printf("continue");
	return EXIT_SUCCESS;
}

/*
 ============================================================================
 Name        : oddnumbers.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int l,i;
	printf("Enter a range/limit :"); /* prints !!!Hello World!!! */
	scanf("%d",&l);
	for(i=1;i<=l;i++){
		if(i%2==1){
			printf("%d \n",i);
		}
	}
	return EXIT_SUCCESS;
}

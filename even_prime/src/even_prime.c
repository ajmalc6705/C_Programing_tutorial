/*
 ============================================================================
 Name        : eben_prime.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n,i;
	printf("Enter a number/range"); /* prints !!!Hello World!!! */
	scanf("%d",&n);
	for(i=2;i<=n;i++){
		if(n%2==0){
			printf("%d \n",i);
		}
	}
	return EXIT_SUCCESS;
}

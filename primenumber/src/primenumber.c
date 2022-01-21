/*
 ============================================================================
 Name        : primenumber.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int l,i,flag=0;
	printf("Enter a Number :"); /* prints !!!Hello World!!! */
	scanf("%d",&l);
	for(i=2;i<=l;i++){
//		printf("a",i);
		if(l%i==0){
			flag=1;

			break;

		}
//		printf(flag);
	}
	if(flag==1){
		printf("Prime Number");

	}else{
		printf("Not a Prime number");
	}
	return EXIT_SUCCESS;
}

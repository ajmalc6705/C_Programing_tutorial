/*
 ============================================================================
 Name        : forloop.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n,i,sum=0;
//	char a="*",tree=0;
	printf("Enter a nymber  :"); /* prints !!!Hello World!!! */
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		sum=sum+i;
		printf("%d \n",sum);
	}
	return EXIT_SUCCESS;
}

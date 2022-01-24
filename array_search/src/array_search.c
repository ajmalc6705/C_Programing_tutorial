/*
 ============================================================================
 Name        : array_search.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int limit,i,array[100],value,flag=0;
	printf("Enter The Array Limit : "); /* prints !!!Hello World!!! */
	scanf("%d",&limit);
	printf("Insert Values into the Array :");
	for(i=0;i<limit;i++){
		scanf("%d",&array[i]);
	}
	printf("Enter the value want to search: \n");
	scanf("%d",&value);
	for(i=0;i<limit;i++){
		if(value==array[i]){
			flag=1;
			break;
		}
	}
	if(flag==1){
		printf("Founded the value on the array position of %d",i+1);
	}else{
		printf("There is no value found");
	}
	return EXIT_SUCCESS;
}

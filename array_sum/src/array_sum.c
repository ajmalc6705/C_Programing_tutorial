/*
 ============================================================================
 Name        : array_sum.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int limit,i,a[100], sum=0,mean=0;
	printf("Enter the Array Limit :"); /* prints !!!Hello World!!! */
	scanf("%d",&limit);
	printf("Enter the Values : ");
	for(i=0;i<limit;i++){
		scanf("%d",&a[i]);
	}
//	Sum Operation
	for(i=0;i<limit;i++){
		sum = sum+ a[i];
		mean =((sum)/limit);
	}
	printf("Sum of the Array is %d \n",sum);
	printf("Mean value is : %d",mean);
	return EXIT_SUCCESS;
}

/*
 ============================================================================
 Name        : selection_sorting.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n,i,array[100],j,temp;
	printf("Enter The Limit :");
	scanf("%d",&n);
	printf("Insert values into the Array :");
	for(i=0;i<n;i++){
		scanf("%d",&array[i]);
	}
//	To Show The Entered Array Values
	printf("Entered Values are : ");
	for(i=0;i<n;i++){
		printf("%d \t",array[i]);
	}
//	Selection Sort
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(array[i]>array[j]){
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
		}
	}
	printf("\nSelection Sorted array is : ");
	for(i=0;i<n;i++){
		printf("%d\t",array[i]);
	}
	return EXIT_SUCCESS;
}

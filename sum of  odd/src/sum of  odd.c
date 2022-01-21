/*
 ============================================================================
 Name        : sum.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,l,sum=0,sumev=0;
//	Program for fINDING sUM oF oDD nUMBER naD eVEN NUMBERS
	printf("Enter The Limit :");
	scanf("%d",&l);
	for(i=1;i<=l;i++){
		if(i%2!=0){
//			printf("%d ",i);
			sum = sum+i;
//			printf("Sum %d \n",sum);
		}else{
//			printf("%d ",i);
			sumev = sumev+i;
//			printf("Sum %d \n",sumev);
		}
	}
	printf("Sum of Odd Number is : %d \n",sum);
	printf("Sum of Even Number is : %d",sumev);
	return EXIT_SUCCESS;
}

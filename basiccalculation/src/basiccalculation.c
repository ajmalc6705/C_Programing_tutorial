/*
 ============================================================================
 Name        : basiccalculation.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a,b,choice,result;
	printf("Enter Two Number \t:"); /* prints !!!Hello World!!! */
	scanf("%d%d",&a,&b);
	printf("1 For Addition \n2 For Subtraction \n3 For Multiplication \n4 Division \nEnter Your Choice :");
	scanf("%d",&choice);

	if(choice == 1){
		result=a+b;
		printf("result is \t : %d", result);
	}else if(choice==2){
		result=a-b;
		printf("result is \t : %d", result);
	}else if(choice==3){
		result= a*b;
		printf("result is \t : %d", result);
	}else if(choice==4){
		result=a/b;
		printf("result is \t : %d", result);
	}else{
		printf("Please enter proper value!!");
	}

	return EXIT_SUCCESS;
}

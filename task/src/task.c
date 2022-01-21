/*
 ============================================================================
 Name        : task.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float mark;
	char grade;
	printf("Enter Your Mark :");
	scanf("%f", &mark);
	if(mark<50){
		printf("Failed");
	}else if(mark<60){
		printf("Grade is E");

	}else if(mark<70){
		printf("Grade is D");

	}else if(mark<80){
		printf("Grade is C");
	}else if(mark<90){
		printf("Grade is B");
	}else if(mark<100){
		printf("Grade is A");
	}else{
		printf("In Valid");
	}
	return EXIT_SUCCESS;
}

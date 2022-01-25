/*
 ============================================================================
 Name        : string.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char name[25];
	printf("Enter Your Name : ");
	scanf("%s",name);
//	gets(name) for space b/w two string
	printf("Hi %s  Welcome to New Future",name);
	return EXIT_SUCCESS;
}

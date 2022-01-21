/*
 ============================================================================
 Name        : switchcase.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int choice;
	printf("1 For Porrota\n2 for biriyani\n3 for Mandi\n4 for Fried rice\nEnter Your Choice"); /* prints !!!Hello World!!! */
	scanf("%d",&choice);
	switch(choice){
	case 1:
		printf("Your order is Porotta");
		break;
	case 2:
		printf("Your order is Biriyani");
		break;
	case 3:
		printf("Your order is Mandhi");
		break;
	case 4:
		printf("Your order is Fried rice");
		break;
	default:
		printf("Invalid choice Plese select again");
	}
	return EXIT_SUCCESS;
}

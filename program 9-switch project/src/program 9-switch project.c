/*
 ============================================================================
 Name        : program.c
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
	printf("1 for porotta\n2 for biriyani\n3 for fried rice\n4 for mandhi\n enter your choice");
	fflush(stdout);
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			printf("you have selected porotta");
			fflush(stdout);
			break;
		case 2:
			printf("you have selected biriyani");
			break;
		case 3:
			printf("you have selected fried rice");
			break;
		case 4:
			printf("you have selected mandhi");
			break;
		default:
			printf("pls select given options");
	}
	return EXIT_SUCCESS;
}

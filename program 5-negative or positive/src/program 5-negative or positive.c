/*
 ============================================================================
 Name        : project.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num;
	printf("enter a number");
	fflush(stdout);
	scanf("%d",&num);
	if(num<0)
	{
		printf("entered number is negative");
	}
	else
	{
		printf("number is positive");
	}
	return EXIT_SUCCESS;
}

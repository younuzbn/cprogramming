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
	int num1,num2;
	printf("enter two numbers");
	fflush(stdout);
	scanf("%d%d",&num1,&num2);
	if(num1>num2)
	{
		printf("greatest number is %d",num1);
	}
	else

	{
		printf("greatest number is %d",num2);
	}
	return EXIT_SUCCESS;
}

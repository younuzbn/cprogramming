/*
 ============================================================================
 Name        : khalil.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num1,num2,answer;
	printf("Please enter two number");
	fflush(stdout);
	scanf("%d%d",&num1,&num2);
	answer=num1+num2;
	printf("result is %d",answer);
	return EXIT_SUCCESS;
}

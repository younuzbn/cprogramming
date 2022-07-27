/*
 ============================================================================
 Name        : test.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num1,num2,num3,answer;
	printf("enter 3 numbers");
	fflush(stdout);
	scanf("%d%d%d",&num1,&num2,&num3);
	answer=(num1+num2+num3)/3;
	printf("answer is %d",answer);
	return EXIT_SUCCESS;
}

/*
 ============================================================================
 Name        : sample.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num1,num2,sum;
	printf("please enter two numbers");
	fflush(stdout);
	scanf("%d%d",&num1,&num2);
	sum=num1+num2;
	printf("your answer is : %d",sum);
	return EXIT_SUCCESS;
}

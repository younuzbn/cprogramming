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
	int num1=10,num2=20,temp;
	temp=num1;
	num1=num2;
	num2=temp;
	printf("number 1:%d number 2:%d",num1,num2);
	return EXIT_SUCCESS;
}

/*
 ============================================================================
 Name        : swapping.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a,b,temp;
	printf("enter 2 numbers");
	fflush(stdout);
	scanf("%d%d",&a,&b);
	temp=a;
	a=b;
	b=temp;
	printf("a:%d b:%d",a,b);
	return EXIT_SUCCESS;
}

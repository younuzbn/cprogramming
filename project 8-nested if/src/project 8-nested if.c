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

int main(void)
{
	int age;
	printf("enter your age");
	fflush(stdout);
	scanf("%d",&age);
	if(age<18);
	{
		printf("you are a minor\n");
		printf("not eligible to work");
	}
	else

   if(age>=18 && age<=60);
    	{
    		printf("you are eligible to work\n");
    		printf("pls fill your details to apply");
    	}
    	else
    	{
    		printf("you are eligible to work\n");
    		printf("pls fill your details to apply");
    	}
	}
	return EXIT_SUCCESS;
}

/*
 ============================================================================
 Name        : input.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a;
	setbuf(stdout,NULL);
	printf("Enter a number"); /* prints !!!Hello World!!! */
	scanf("%d",&a);
	printf("You have entered %d",a);
	return EXIT_SUCCESS;
}

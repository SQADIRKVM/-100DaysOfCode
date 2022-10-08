/*
 ============================================================================
 Name        : Day.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char a;
	setbuf(stdout,NULL);
	printf("Enter a letter"); /* prints !!!Hello World!!! */
	scanf("%c",&a);
	printf("Entered letter is:%c",a);
	return EXIT_SUCCESS;
}

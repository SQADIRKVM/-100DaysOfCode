/*
 ============================================================================
 Name        : day.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int p;
	setbuf(stdout,NULL);
	float r,n,si;
	setbuf(stdout,NULL);
	printf("Enter Principal amount:");
	scanf("%d",&p);
	printf("Enter Interest rate:");
	scanf("%f",&r);
	printf("Enter Number of year:");
	scanf("%f",&n);
	si=(p*r*n)/100;
	printf("Simple interest:%f",si);
	return EXIT_SUCCESS;
}

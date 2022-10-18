/*
 ============================================================================
 Name        : ArrayUserInput.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,a[100],limit;
	setbuf(stdout,NULL);
	printf("Enter a limit:");
	scanf("%d",&limit);
	printf("Enter the values of array:");
	for(i=0;i<limit;i++){
		scanf("%d",&a[i]);
	}
	printf("Values are:");
	for(i=0;i<limit;i++){
		printf("%d ",a[i]);
	}
	return EXIT_SUCCESS;
}

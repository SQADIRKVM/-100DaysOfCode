/*
 ============================================================================
 Name        : multiplicationTable.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,num,multi;
	setbuf(stdout,NULL);
	printf("Enter a number");
	scanf("%d",&num);
	for(i=1;i<=10;i++){
		multi=i*num;
		printf("%d x %d=%d \n",i,num,multi);
	}
	return EXIT_SUCCESS;
}

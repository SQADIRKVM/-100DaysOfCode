/*
 ============================================================================
 Name        : larger.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num1,num2;
	setbuf(stdout,NULL);
	printf("Enter 2 numbers");
	scanf("%d%d",&num1,&num2);
	if(num1<num2){
		printf("Number%d is greater",num2);
	}else{
		printf("Number %d is greater",num1);
	}
	return EXIT_SUCCESS;
}

/*
 ============================================================================
 Name        : PrimeOrNot.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,number,flag=0;
	setbuf(stdout,NULL);
	printf("Enter a number");
	scanf("%d",&number);
	for(i=2;i<number/2;i++){
		if(number%i==0){
			flag=1;
			break;
		}
	}
	if(flag==0){
		printf("prime");
	}else{
		printf("Not prime");
	}
	return EXIT_SUCCESS;
}

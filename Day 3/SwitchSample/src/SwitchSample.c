/*
 ============================================================================
 Name        : SwitchSample.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int choice;
	setbuf(stdout,NULL);
	printf("1 for Porotta \n2 for biriyani \n3 for Fried rice \n4 for mandhi");
	scanf("%d",&choice);
	switch(choice){
	case 1:
		printf("You have selected porotta");
		break;
	case 2:
		printf("You have selected biriyani");
		break;
	case 3:
		printf("you have selected fried rice");
		break;
	case 4:
		printf("You have selected mandhi");
		break;
	default:
		printf("Invalid Input");
	}
	return EXIT_SUCCESS;
}

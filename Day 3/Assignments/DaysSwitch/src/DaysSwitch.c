/*
 ============================================================================
 Name        : DaysSwitch.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int day;
	setbuf(stdout,NULL);
	printf("1 for Sunday \n2 for Monday \n3 for Tuesday \n4 for Wednesday \n5 for Thursday \n6 for Friday \n7 for Saturday \nEnter your choice");
	scanf("%d",&day);
	switch(day){
	case 1:
		printf("Sunday");
		break;
	case 2:
		printf("Monday");
		break;
	case 3:
		printf("Tuesday");
		break;
	case 4:
		printf("Wednesday");
		break;
	case 5:
		printf("Thursday");
		break;
	case 6:
		printf("Friday");
		break;
	case 7:
		printf("Saturday");
		break;
	default:
		printf("Invalid Input");
	}
	return EXIT_SUCCESS;
}

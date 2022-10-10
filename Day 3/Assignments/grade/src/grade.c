/*
 ============================================================================
 Name        : grade.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int marks;
	setbuf(stdout,NULL);
	    printf("Enter your marks ");
	    scanf("%d",&marks);
	    if(marks<0 || marks>100)
	    {
	        printf("Wrong Entry");
	    }
	    else if(marks<50)
	    {
	        printf("Failed");
	    }
	    else if(marks>=50 && marks<60)
	    {
	        printf("Grade D");
	    }
	    else if(marks>=60 && marks<70)
	    {
	        printf("Grade C");
	    }
	    else if(marks>=70 && marks<80)
	    {
	        printf("Grade B");
	    }
	    else if(marks>=80 && marks<90)
	    {
	        printf("Grade A");
	    }
	    else
	    {
	        printf("Grade A+");
	    }
	return EXIT_SUCCESS;
}

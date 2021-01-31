// Demonstrates using multiple return statements in a function.

#include <stdio.h>

char last_init;
int room;

int room_assign(char last_init);

int main(void)
{
	puts("Enter the first initial of your last name: ");
	scanf("%c", &last_init);
	
	room = room_assign(last_init);
	
	printf("\n You need to report to room %d.",  room);
	
	return 0;
	
	
}


int room_assign(char li)
{
	/*
		This if statement tests whethter the first initial is A-M or N-Z
		with the first group being assigned room 1045 and the rest 1055
		
		The or part of the statement lets us check both lower and uppercase
	
	*/
	
	if(( li >= 'a' && li <= 'm') || (li >= 'A' && li <= 'M' ))
	{
		
		return 1045;
		
	}
	
	else
	{
		
		return 1055;
	}
	
	
	
}

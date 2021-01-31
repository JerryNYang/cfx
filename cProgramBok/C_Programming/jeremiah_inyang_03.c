/*
	Jeremiah Denis Inyang
	CSCE 3600
	Minor 1 Assignment 
	  * Allocation of memory and sorting using pointers
	  * jeremiah_inyang_03.c
	IDE(s): BloodShed Dev C++ or CLion
	Programming Language Used: C 
	Date: 9.21.2020
	Professor : Dr. Oleg Kolgushev
	
	Teacher Assistant(s):
		* Shuwen Liang
		* Jeremy Glebe
		
	Due: October 5, 2020 (6 PM)
	Submitted: 10.01.2020 (6 AM )
*/

// Macro
#define NUM 5

// Librarie(s)
#include <stdio.h>
	// used for input and output
	
#include<stdlib.h>
	/*
		used for int atoi(const char *str)
		used for malloc, calloc, and free()
		memory management....helps in managing a dynamic array				
	*/
	
#include<string.h>
int main(void)
{
	
	const char *Cpointer;
	int iArray[NUM];
	
	printf("Enter sequence of integers one per line \n");
	printf("(empty line indicates termination of the sequence):\n");
		
	
	int i;
	int value;	
	Cpointer = ( char *) malloc(NUM * sizeof(char));
	
	if(Cpointer == NULL)
	{
		printf("Memory allocation error and terminate the program.");
		return;
	}
	

	else
	{
	
		//atoi(strInput);
			for(i = 0; i < NUM; i++)
			{
				scanf(" %[^\n]s", (Cpointer+i));
				
				value = atoi(Cpointer+i);
				printf("Hi number %d\n",value);
				
				iArray[i] = value;
			
				
				free(Cpointer);
				
				
				// i_pointer + i = atoi(*pointer + i);
				
			}
			
			int k;
			int m;
			int temporary;
			
			for(k = 0; k < NUM; k++)
			{
				for(m = k+1; m < NUM; m++)
				{
					if(iArray[k] > iArray[m])
					{
						temporary = iArray[k];
						iArray[k] = iArray[m];
						iArray[m] = temporary;
					}
					
				}
				
				
			}
			
			printf("\nIndex array and sorted sequence: \n");
			for(i = 0; i < NUM; i++)
			{
				/*
					%p
					%0x
					(&i+i) similar to &iArray[i]
				
				*/
				printf("%d\t0x%0x\t%d\t", i, &iArray[i], iArray[i]);
				
				
			}
			
			
			
 		
    }
	
		

	return 0;
}

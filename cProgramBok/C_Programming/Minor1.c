#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>


// Oleg modified
int main()
{

	int *pn;
	int i=0, k=1, n=0;
	char *s = malloc(10);

if(!(pn = (int*)malloc(sizeof(int)))) {

	printf("Memory allocation error\n"); 
	exit(0);
}

// Start reading loop
while (scanf("%[-0-9]s", s)  == 1)
{
		i++;
		// Allocate more memory
		if(!(pn = (int*)realloc(pn, i*sizeof(int)))) {
			printf("Memory allocation error\n"); 
			exit(1);
			
		}
		// Store the input into allocated memory
		pn[i-1]=atoi(s);
		// Clear input buffer
		scanf("%c",s);
}

// Create index array in sorting order using Insertion sort algorithm
int *pi[i];
int k1;
int m1;
for(k1=0;k1<i;k1++)
{
	pi[k1] = pn + k1;
	for(m1=k1; m1>0; m1--)
	{
		if(*(pi[m1]) < *(pi[m1-1]))
		{
			int *a = pi[m1];
			pi[m1] = pi[m1-1];
			pi[m1-1] = a;
		}
	}
}

int k2;
// Print index array and numbers in sorted order
for (k2=0;k2<i;k2++) 
	printf("%p %d\n", pi[k2], *(pi[k2]));

return 0;

}



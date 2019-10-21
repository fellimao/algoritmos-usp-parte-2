#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// multiplica a diagonal por 5
int main ()
{
	int l, c, A[5][5];
	srand(time(NULL));
	for (l=0; l<5; l++)
	{
		for (c=0; c<5; c++)
		{
			A[l][c]=rand()%10;
		}
	}
	for (l=0; l<5; l++)
	{
		printf("\n");
		for (c=0; c<5; c++)
		{
			printf("%3d", A[l][c]);
		}
	}
	printf("\n");
	for (l=0; l<5; l++)
	{
		printf("\n");
		for (c=0; c<5; c++)
		{
			if (l==c)
	        {
		    	A[l][c]=5*A[l][c];
	        }
			printf("%3d", A[l][c]);
		}
	}
}
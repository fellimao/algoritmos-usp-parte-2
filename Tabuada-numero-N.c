#include <stdio.h>
//Codigo para fazer a tabuada de um numero n
int main ()
{
	int n, result;
	int i;
	printf("Insira um numero: ");
	scanf("%d", &n);
	i=1;
	while (i<11)
	{
		result=i*n;
		printf("%d x %d = %d \n", n, i, result);
		i++;
	}
		
}
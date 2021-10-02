#include<stdio.h>
int verifica(int v[]);
main()
{
	int v[100];
	int n=0;
	n = verifica(v);
	for(int i=0;i<n;i++)
	{
		printf("\n%d\n",v[i]);
	}
}
int verifica(int v[])
{
	int i,j,cont=0,high,low;
	for(i=1000;i<=9999;i++)
	{
		high=i/100;
		low=i%100;
		if((high+low)*(high+low)==i)
		{
			v[cont]=i;
			//printf("Da uma bisoiada no %d\n",i);
			cont++;
		}
		
	}
	return cont;
}

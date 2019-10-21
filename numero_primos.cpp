#include<stdio.h>
main()
{
	int a, b, c, cont, vet[9];
	a=0;
	b=0;
	cont=0;
	for (a=0; a<9; a++)
	{
		printf("Escreva o numero de posicao %d: ", a);
		scanf("%d", &vet[a]);
	}
	for (b=0; b<9; b++)
	{
		cont=0;
		for(c=1; c<=vet[b]; c++)
		{
			if(vet[b]%c==0)
				cont++;
		}
		if(cont==2)
		{
			printf("%d na posicao %d eh numero primo\n", vet[b], b);
		}
	}
}

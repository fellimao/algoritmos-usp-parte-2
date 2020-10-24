#include <stdio.h>
void bubble (int x[],int n);
void main()
{
    int vetor[8],i,n;

    printf("Digite a quantidade de vetores: ");
    scanf("%d",&n);

    printf("\nDigite os numeros: ");
    for (i=0;i<n;i++)
    {
        scanf("%d",&vetor[i]);
    }

    bubble(vetor,n);
    printf("FICOU: \n");
    for (i=0;i<n;i++)
    {
        printf("%d  ",vetor[i]);
    }
    printf("\n");
}

void bubble (int x[],int n)
{
    int j, i;
    int aux;
    if(n==0)
        return;
    else{
        for (j=0;j<n-1;j++)
        {
            if (x[j]>x[j+1])
            {
                aux=x[j];
                x[j]=x[j+1];
                x[j+1]=aux;
            }
        }
        bubble(x,n-1);
    }
}

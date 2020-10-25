#include <stdio.h>
void selectsort (int x[], int n, int i);

void main()
{
    int vetor[10],i,n;

    printf("\nDigite a quantidade de vetores: ");
    scanf("%d",&n);

    printf("\nDigite os numeros: ");
    for (i=0;i<n;i++)
    {
        scanf("%d",&vetor[i]);
    }

    selectsort(vetor,n,n-1);
    printf("FICOU: \n");
    for (i=0;i<n;i++)
    {
        printf("%d  ",vetor[i]);
    }
    printf("\n\n");

}

void selectsort (int x[], int n, int i)
{
    int indx, j, large;
    if (i<=0)
        return;
    else{
        /*coloca o maior elemento de x[0] até x[i] em large e seu indice em indx*/
        large = x[0];
        indx = 0;
        for (j = 1; j <= i; j++){
            if (x[j] > large) {
                large = x[j];
                indx = j;
            }
        }
        x[indx] = x[i];
        x[i] = large;
        selectsort(x,n,i--);
    }
}
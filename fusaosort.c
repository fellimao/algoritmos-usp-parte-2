#include <stdio.h>
#include <stdlib.h>
#define MAX 100000

int N;
int cmp, m;

void merge(int a[], int L, int h, int R, int c[]){
    int i = L;
    int j = h + 1;
    int k = L - 1;

    while ((i <= h) && (j <= R))
    {
        k = k + 1;
        cmp++;
        if (a[i] < a[j])
        {
            c[k] = a[i];
            m++;
            i = i + 1;
        }
        else
        {
            m++;
            c[k] = a[j];
            j = j + 1;
        }  
    }
    while (i <= h)
    {
        k = k + 1;
        m++;
        c[k] = a[i];
        i = i + 1;
    }
    while (j <= R)
    {
        k = k + 1;
        m++;
        c[k] = a[j];
        j = j + 1;
    }   
}

void mpass(int a[], int p, int c[]){
    int i = 1;
    while (i <= (N-2*p+1))
    {
        merge(a, i, i+p-1, i+2*p-1, c);
        i = i + 2*p;
    }
    if ((i+p-1) < N)
        merge(a, i, i+p-1, N, c);
    else
    {
        for (int j = i; j <= N; j++)
        {
            m++;
            c[j] = a[j];
        }
    }
}

void mergesort(int a[]){
    int c[N+1];
    int p = 1;
    while (p < N)
    {
        mpass(a, p, c);
        p = 2 * p;
        mpass(c, p, a);
        p = 2 * p;
    }
    
}

void imprimir(int V[]){
    for (int i = 1; i <= N; i++)
    {
        printf("%i ", V[i]);
    }
    printf("\n");    
}

int main(){
    int v1[MAX], v2[MAX], v3[MAX];

    printf("Digite tamanho pro vetor: ");
    scanf("%i", &N);

    for (int i = 1; i <= N; i++)
    {
        v1[i] = i;
        v2[i] = rand() % 100;
        v3[i] = 0 - i;
    }

/*     printf("v1:");
    imprimir(v1);
    printf("v2:");
    imprimir(v2);
    printf("v3:");
    imprimir(v3); */

    printf("\nOrdenando..............\n");
    cmp = 0;
    m = 0;
    mergesort(v1);
    printf("No melhor caso, foram %i comparações e %i movimentações.\n", cmp, m);

    cmp = 0;
    m = 0;
    mergesort(v2);
    printf("No caso aleatório, foram %i comparações e %i movimentações.\n", cmp, m);

    cmp = 0;
    m = 0;
    mergesort(v3);
    printf("No pior caso, foram %i comparações e %i movimentações.\n", cmp, m);

/*     printf("\nv1:");
    imprimir(v1);
    printf("\nv2:");
    imprimir(v2);
    printf("\nv3:");
    imprimir(v3); */

    return 0;
}
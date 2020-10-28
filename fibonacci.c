#include <stdio.h>

void fibonacci(int n)
{
    int a = 0, b = 1, i, auxiliar, cont = 3;

    printf("0 ");
    printf("1 ");

    
    while (cont <=n)
    
    {
        auxiliar = a + b;
        a = b;
        b = auxiliar;
        cont ++;

        printf("%i ", auxiliar);
    }
    printf("\n");
}


int main()
{
    int n;
    printf("\nDigite ate que posição que ir na sequencia: ");
    scanf("%d", &n);
    fibonacci(n);
    
    return 0;
}
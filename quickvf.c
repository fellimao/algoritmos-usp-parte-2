#include <stdio.h>
#include <stdlib.h>


void quick_sort(int *n, int menor, int maior) {
    int i, j, a, k;

    i = menor;
    j = maior;
    a = n[(menor + maior) / 2];

    while(i <= j) {
        while(n[i] < a && i < maior) {
            i++;
        }
        while(n[j] > a && j > menor) {
            j--;
        }
        if(i <= j) {
            k = n[i];
            n[i] = n[j];
            n[j] = k;
            i++;
            j--;
        }
    }

    if(j > menor) {
        quick_sort(n, menor, j);
    }
    if(i < maior) {
        quick_sort(n, i, maior);
    }
}

void quick_sort(int *n, int menor, int maior);

int main(){
    int i, v[100], p, arq, c;
    printf("\nO que voce deseja fazer?\n1-Acessar Arquivo \n2-Criar arquivo: ");
    scanf("%d", &arq);
    FILE*pont;
    pont = fopen("arquivo","r");
    if( arq == 1){
        if(pont == NULL){
            FILE*pont;
            pont = fopen("arquivo","r");
            printf("Erro na abertura do arquivo");
            return main();
        }else{
            while((c = getc(pont) ) != EOF)
            printf("%c", c);
            fclose(pont);
            printf("\nFim do programa");
            return main();
        }
    }else{
        FILE *pont;
        pont = fopen("arquivo","w");
        printf("Digite a quantidade de numeros: ");
        scanf("%d", &p);
        for(i = 0; i < p; i++){
            printf("Digite um valor: ");
            scanf("%d", &v[i]);
        }
        quick_sort(v, 0, p - 1);
        printf("Valores ordenados: ");
        for(i = 0; i < p; i++){
            printf("%d ", v[i]);
            fprintf(pont, "%d ", v[i]);
        }
        fclose(pont);
        printf("\nDados gravados com sucesso");

        getch();
        return main();
    }
}

#include <stdio.h>		 // biblioteca padrão da linguagem C
#include <math.h>	    // biblioteca necessária para calculo do desvio padrão
#include <windows.h>   // biblioteca para definir tamanho da janela

main () {
	system("mode con:cols=73 lines=30");  // define um tamanho padrão para janela do cmd ao executar o programa
	
	int A, B, C, D, E, opcao, p1, p2, p3, p4, p5, maior, menor, menu, menu2;
	float soma, media, x, y, z, w, t, F, G, H, I, J, d1, d2, desvio, MP, MP1, MP2;
	
	printf ("\n                     USP - UNIVERSIDADE DE SAO PAULO");
	printf ("\n                     INFORMATICA BIOMEDICA - 2020.1");
	printf ("\n\n------------------------- OPERACOES MATEMATICAS ---------------------- 01");
	
	printf ("\n\nInsira 5 numeros para realizar as operacoes. \n");
	printf ("Primeiro Numero:");
	scanf ("%d", &A);
	printf ("Segundo Numero:");
	scanf ("%d", &B);
	printf ("Terceiro Numero:");
	scanf ("%d", &C);
	printf ("Quarto Numero:");
	scanf ("%d", &D);
	printf ("Quinto Numero:");
	scanf ("%d", &E);
	

do { // Foi utilizado o do-while para, solicitar uma opção de menu válida.
	system ("cls");
	printf ("\n                     USP - UNIVERSIDADE DE SAO PAULO");
	printf ("\n                     INFORMATICA BIOMEDICA - 2020.1");
	printf ("\n\n------------------------- OPERACOES MATEMATICAS ---------------------- 02");
	printf ("\n\n Selecione a operacao matematica que deseja realizar: \n\n");
	printf (" OPC      Descricao \n");
	printf ("-----    ----------------------------------------------------------------\n");
	printf ("  1 	  Media Aritmetica Simples \n");
	printf ("  2	  Media Ponderada \n");
	printf ("  3	  Desvio Padrao \n");
	printf ("  4	  Mostrar Maior Valor \n");
	printf ("  5 	  Mostrar Menor Valor \n");
	printf ("  6	  Mostrar valores inseridos \n");
	printf ("Opcao: ");
	scanf ("%d", &opcao);

	switch (opcao) // a cada opção selecionada no menu, irá direcionar o usuario para seu submenu que realizará a função desejada.
	{
		case 1: // Média Aritmética
			soma = A + B + C + D + E;
			system ("cls"); // Limpa a janela do CMD para uma melhor apresentação do programa
			printf ("\n                     USP - UNIVERSIDADE DE SAO PAULO");
			printf ("\n                     INFORMATICA BIOMEDICA - 2020.1");
			printf ("\n\n---------------- OPERACOES MATEMATICAS - MEDIA ARITMETICA ---------------");
			printf ("\n\n O Resultado da media aritmetica e: %f \n", soma/5);
			system ("pause"); // esta linha impede que o programa mostre o resultado rapidamente e feche automaticamente quando o usuario selecionar a opçao no menu
		break;

		case 2: // Média Ponderada
			system ("cls"); // Limpa a janela do CMD para uma melhor apresentação do programa
			printf ("\n                     USP - UNIVERSIDADE DE SAO PAULO");
			printf ("\n                     INFORMATICA BIOMEDICA - 2020.1");
			printf ("\n\n----------------- OPERACOES MATEMATICAS - MEDIA PONDERADA ---------------");
			printf ("\n\nInsira os Pesos referente a cada valor: \n");
			printf ("Primeiro Valor Digitado:   %d", A); printf ("       Insira o peso: "); scanf ("%d", &p1);
			printf ("Segundo  Valor Digitado:   %d", B); printf ("       Insira o peso: "); scanf ("%d", &p2);
			printf ("Terceiro Valor Digitado:   %d", C); printf ("       Insira o peso: "); scanf ("%d", &p3);
			printf ("Quarto   Valor Digitado:   %d", D); printf ("       Insira o peso: "); scanf ("%d", &p4);
			printf ("Quinto   Valor Digitado:   %d", E); printf ("       Insira o peso: "); scanf ("%d", &p5);
			MP1 = ( A * p1 ) + ( B * p2 ) + ( C * p3 ) + ( D * p4 ) + ( E * p5 );
			MP2 = p1 + p2 + p3 + p4 + p5;
			MP = MP1/MP2;
			printf ("\n A Media Ponderada e: %d", MP);
			system ("pause"); // esta linha impede que o programa mostre o resultado rapidamente e feche automaticamente quando o usuario selecionar a opçao no menu
		break;
		
		case 3: // Desvio Padrão
			system ("cls"); // Limpa a janela do CMD para uma melhor apresentação do programa
			printf ("\n                     USP - UNIVERSIDADE DE SAO PAULO");
			printf ("\n                     INFORMATICA BIOMEDICA - 2020.1");
			printf ("\n\n----------------- OPERACOES MATEMATICAS - DESVIO PADRAO -----------------");
			soma = A + B + C + D + E;
            media = soma/5;
            x = A - media; 
            y = B - media;
            z = C - media;
            w = D - media;
            t = E - media;
            F = pow (x, 2);
            G = pow (y, 2);
            H = pow (z, 2);
            I = pow (w, 2);
            J = pow (t, 2);
            d1 = F, G, H, I, J;
            d2 = d1/5;
            desvio = sqrt (d2);
            printf("\n\no resultado do desvio padrao: %f\n", desvio);
            system ("pause"); // esta linha impede que o programa mostre o resultado rapidamente e feche automaticamente quando o usuario selecionar a opçao no menu
		break;
		
		case 4: // Maior valor digitado pelo usuario
			system ("cls"); // Limpa a janela do CMD para uma melhor apresentação do programa
			printf ("\n                     USP - UNIVERSIDADE DE SAO PAULO");
			printf ("\n                     INFORMATICA BIOMEDICA - 2020.1");
			printf ("\n\n----------------- OPERACOES MATEMATICAS - MAIOR VALOR -------------------");
			maior = A;
			menor = A;
			if (B < menor)
    		    menor = B;
			if (B > maior)
        		maior = B;
			if (C < menor)
        		menor = C;
			if (C > maior)
        		maior = C;
        	if (D < menor)
        		menor = D;
			if (D > maior)
        		maior = D;
        	if (E > maior)
        		maior = E;
			if (E > maior)
        		maior = E;
        	printf ("\n\nO Maior valor digitado foi: %d\n", maior);
        	system ("pause"); // esta linha impede que o programa mostre o resultado rapidamente e feche automaticamente quando o usuario selecionar a opçao no menu
		break;
		
		case 5: // Menor valor digigtado pelo usuário
			system ("cls"); // Limpa a janela do CMD para uma melhor apresentação do programa
			printf ("\n                     USP - UNIVERSIDADE DE SAO PAULO");
			printf ("\n                     INFORMATICA BIOMEDICA - 2020.1");
			printf ("\n\n------------------- OPERACOES MATEMATICAS - MENOR VALOR -----------------");
			maior = A;
			menor = A;
			if (B < menor)
    		    menor = B;
			if (B > maior)
        		maior = B;
			if (C < menor)
        		menor = C;
			if (C > maior)
        		maior = C;
        	if (D < menor)
        		menor = D;
			if (D > maior)
        		maior = D;
        	if (E > maior)
        		maior = E;
			if (E > maior)
        		maior = E;
        	printf ("\n\nO Menor valor digitado foi: %d\n", menor);
        	system ("pause"); // esta linha impede que o programa mostre o resultado rapidamente e feche imediatamente quando o usuario selecionar a opçao no menu
		break;
		
		case 6: // todos os valores digitados pelo usuario
			system ("cls"); // Limpa a janela do CMD para uma melhor apresentação do programa
			printf ("\n                     USP - UNIVERSIDADE DE SAO PAULO");
			printf ("\n                     INFORMATICA BIOMEDICA - 2020.1");
			printf ("\n\n--------------- OPERACOES MATEMATICAS - VALORES DIGITADOS -------------");
			printf ("\n\nOs Valores inseridos foram: %d, %d, %d, %d, %d\n", A, B, C, D, E);
			system ("pause"); // esta linha impede que o programa mostre o resultado rapidamente e feche automaticamente quando o usuario selecionar a opçao no menu
		break;				
	}
} while (opcao >6 || opcao <1); // Não irá repetir caso o usuário digite uma opção que esteja presente no menu (opções entre 1 e 6)
}

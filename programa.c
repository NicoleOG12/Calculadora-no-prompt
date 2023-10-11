#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

int opcao, num1, num2;
printf ("1- Soma\n 2- Subtração\n 3- Multiplicação\n 4- Divisao\n 5- Sair\n\n");
scanf ("%d", &opcao);

if(opcao)
printf ("Digite um valor");
scanf ("%d", &num1);
printf ("Digite outro valor");
scanf ("%d", &num2);

switch (opcao){

	case 0: printf("saindo...\n");
		break;

	case 1:
		printf ("soma: %d\n", num1 + num2);
		break;
	case 2: 
		printf ("subtracao: %d\n", num1 - num2);
		break;
	case 3:
		printf ("multiplicacao: %d\n", num1 * num2);
		break;
	case 4:
		if (num2==0) {
		printf ("Nao existe divisao por zero\n Digite outro valor");
		scanf("%d,&num2");
		}
		
		printf ("divisao: %d\n", num1/ num2);
		break; 
               }
		
		return 0;

               }




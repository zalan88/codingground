#include <stdio.h>

int main()
{
	int funcao;
	float x, y, resultado;
	
	printf("\n===============CALCULADORA BASICA===============\n\nDigite o numero da funcao desejada:\n\n1-SOMA\n2-SUBTRACAO\n3-DIVISAO\n4-MULTIPLICACAO\n\n->");
	scanf("%i", &funcao);
	getchar();
	
	if (funcao == 1)
		{
			printf("\nSELECIONADO: SOMA\nDigite o 1o valor -> ");
			scanf("%f", &x);
			getchar();
			
			printf("Digite o 2o valor -> ");
			scanf("%f", &y);
			getchar();
			
			resultado = x + y;
		}
	else if (funcao == 2)
		{
			printf("\nSELECIONADO: SUBTRACAO\nDigite o 1o valor -> ");
			scanf("%f", &x);
			getchar();
			printf("Digite o 2o valor -> ");
			scanf("%f", &y);
			getchar();
			
			resultado = x - y;
		}
	else if (funcao == 3)
		{
			printf("\nSELECIONADO: DIVISAO\nDigite o 1o valor -> ");
			scanf("%f", &x);
			getchar();
			
			printf("Digite o 2o valor -> ");
			scanf("%f", &y);
			getchar();
				
			resultado = x / y;
		}
	else if (funcao == 4)
		{
			printf("\nSELECIONADO: MULTIPLICACAO\nDigite o 1o valor -> ");
			scanf("%f", &x);
			getchar();
			printf("Digite o 2o valor -> ");
			scanf("%f", &y);
			
		
				
			resultado = x * y;	
		}
	else if (funcao != 1 && funcao != 2 && funcao != 3 && funcao != 4)
		{
			printf("Codigo de operacao incorreto");
			return 0;
		}
	printf("\n======| RESULTADO = %f |========\n", resultado);	
	return 0;
}
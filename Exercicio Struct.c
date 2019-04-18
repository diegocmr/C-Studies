#include <stdio.h>
#include <stdlib.h>

int main()
{
	struct data
	{
		char nome;
		char abreviacao;
		int numdias;
		int nummes;
	};
	
	struct data data;
	
	int i;
	
	for (i=0; i<12; i++)
	{
		printf ("Digite o nome do mes: ");
		data.nome=getchar();
		printf ("Digite a abreviatura do mes: ");
		data.abreviacao=getchar();
		printf ("Digite a quantidade de dias do mes: ");
		scanf ("%d", &data.numdias);
		printf ("Digite o numero do mes: ");
		scanf ("%d", &data.nummes);						
	}
	
	for (i=0;i<12;i++)
	{
		printf ("Mês %d:\nNome: %c\nAbreviatura: %c\nDias: %d\n\n", data.nummes, data.nome, data.abreviacao, data.numdias);
	}
	
	system ("pause");
	
	return 0;
	
}

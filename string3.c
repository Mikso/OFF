#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
	char linha[40];
	int i = 0;
	int ContA = 0;
	int ContE = 0;
	int ContI = 0;
	int ContO = 0;
	int ContU = 0;
	
	//gets(linha); // Usando scanf %40 e %s n foi
	scanf("%s", linha);



		while(i < strlen(linha)){ // nao consegui para ambos os casos maiusculo e minusculo

			if(linha[i] == 'a')	{
				ContA = ContA + 1;
			}else
			if(linha[i] == 'e' )	{
				ContE = ContE + 1;
			}else
			if(linha[i] == 'i' )	{
				ContI = ContI + 1;
			}else
			if(linha[i] == 'o' )	{
				ContO = ContO + 1;
			}else
			if(linha[i] == 'u' )	{
				ContU = ContU + 1;
			}
i++;
		}


printf("\n\t a: %d ocorrencias\n", ContA);
printf("\n\t e: %d ocorrencias\n", ContE);
printf("\n\t i: %d ocorrencias\n", ContI);
printf("\n\t o: %d ocorrencias\n", ContO);
printf("\n\t u: %d ocorrencias\n", ContU);

	return 0;
}
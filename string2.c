#include <stdio.h>
#include <ctype.h>

int main(int argc, char *argv[]) {

char palavra[10];
int i = 0;
int cont = 0;

scanf("%s", palavra); // use %s

while(i < 10) {
	if(islower(palavra[i]) ){
		cont=cont + 1;
	}
		i++;
}

printf("\t\n Existe %d letras minusculas\n", cont);

	return 0;
}
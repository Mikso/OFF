#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
char str1[40] = "arte de tudo ";
char str2[40] = "Eu li p";
char str3[40] = "ao longo da viagem";

strcat(str1,str3); /* arte de tudo ao longo da viagem*/
strcat(str2, str1); /* eu li p arte de tudo ao longo da viagem*/


puts(str2);  /* eu li p arte de tudo ao longo da viagem */


	return 0;
}
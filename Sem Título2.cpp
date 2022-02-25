#include <stdio.h>
#include <stdlib.h>

int main () 
{
	
char tamanho;
printf ("\nDigite o tamanho desejado [G] ou [M]\n");
scanf ("%c", &tamanho);
if (tamanho == 'G')
	printf("dirija-se ao corredor 3. \n");
else
	printf("dirija-se ao corredor 2. \n");
system ("pause");
return 0;
}

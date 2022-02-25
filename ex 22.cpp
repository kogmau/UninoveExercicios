#include<stdio.h>
#include<locale.h>
#include <conio.h>


int main(){
	setlocale(LC_ALL,"PORTUGUESE");
	int lapis, borracha, caneta, cadernos, fitas;
	
	fitas=350;
	cadernos=8;
	caneta=420;
	borracha=2345;
	lapis=45;
	printf("\n \t        TABELA");
	printf("\n \t====================");
	printf("\n \t | Lápis      %12d  %d ",lapis);
	printf("\n \t | Borrachas  %12d",borracha);
	printf("\n \t | Canetas    %12d",caneta);
	printf("\n \t | Cadernos   %12d",cadernos);
	printf("\n \t | Fitas      %12d",fitas);
	printf("\n \t===================");
	
return 0;
}

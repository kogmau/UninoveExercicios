#include<stdio.h>
#include<locale.h>
#include <iostream>

int main(){
	setlocale(LC_ALL,"PORTUGUESE");
		
	int num1;
	float num2;
	char caractere;
	
	num1=5;
	num2=12,500000;
	caractere='k';

	printf("Este n�mero � o %i", num1);
	printf("\n Este n�mero � o %f", num2);
	printf("\n Isto n�mero � um caractere %c", caractere);
	return 0;
}

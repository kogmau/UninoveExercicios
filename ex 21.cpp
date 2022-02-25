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

	printf("Este número é o %i", num1);
	printf("\n Este número é o %f", num2);
	printf("\n Isto número é um caractere %c", caractere);
	return 0;
}

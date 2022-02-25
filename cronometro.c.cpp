#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<stdlib.h>

int main (){
	int seg=0, min=0, hr=0;
	
	while(1==1){
		Sleep (1000);
		seg++;
		system("cls");
		
		if (seg > 59) {
			min++;
			seg==0;
	}
		if (min > 59) {
			hr++;
			min=0;
		}
		if (hr > 23 ) {
			hr=0;
		}
		printf ("\t\t\t %i, %i, %i Horas, Minutos, Segundos", hr, min, seg);
		
	}
	system("pause");
	return 0;
}

#include<stdio.h>
#include<stdlib.h>

void tabuleiro (char casas2 [3][3]) {
	system("cls");
	printf ("\t -------------\n");
	printf ("\t | %c | %c | %c |\n", casas2 [0][0], casas2 [0][1], casas2 [0][2] ) ;
	printf ("\t -------------\n");
	printf ("\t | %c | %c | %c |\n", casas2 [1][0], casas2 [1][1], casas2 [1][2] ) ;
	printf ("\t -------------\n");
	printf ("\t | %c | %c | %c |\n", casas2 [2][0], casas2 [2][1], casas2 [2][2] );
	printf ("\t -------------\n");
}
int main (){
	 char casas [3][3] =  { {'1', '2', '3'},
	  						{'4', '5', '6'},
	  						{'7', '8', '9'},
							};

	char res;
	
	int cont_jogadas,l,c,vez=0,i,j;
	
	do{ 

		cont_jogadas= 1;
		for (i=0;j<=2; i++){
			for (j=0;j<=2;j++){
				casas[i][j] =' ';
			}
		}
		do{
			tabuleiro (casas);
			printf ("digite a linha:\n");
			scanf ("%i",& l);
	printf ("\ndigite a coluna");
	scanf ("%i", & c);
	if (l<1 || l>3 || c<1 || c>3){
		l=0;
		c=0;
		} else if (casas [l-1][c-1] !=' '){
				l=0;
				c=0;
					}else{
					if (vez%2==0){
					casas [l-1][c-1] = 'X';
		
						}else{
						casas [l-1][c-1] = 'O';
							}
							vez++;
								cont_jogadas++;	
								}while(cont_jogadas <=9);
									printf("Deseja Jogar novamente? [S-N]\n");
									scanf("%s", &res);
										while(res=='S');}
										
										}
	return 0;	
	}
		
		


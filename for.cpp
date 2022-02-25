#include<stdio.h>

int main(){
	
	int i,j,o;
	printf("digite quantas linhas você deseja no triangulo\n");
	scanf("%i",& o);
	
	for(i=1;i<=o;i++){	
		for(j=1;j<=i;j++){
			printf("%2c",'*');
		}	
	printf("\n");
	}
printf("\n");
	return 0;
}

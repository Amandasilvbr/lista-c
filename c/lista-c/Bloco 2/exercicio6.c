#include <stdio.h>
#include <string.h>
#include <math.h>

int main(){
	
	int i, contador;
	float alt;
	char nomeEquipe[100];

	
	printf("Digite o nome da equipe\n");
	scanf("%s",&nomeEquipe);
	contador = 0;
	
	for (i=1; i <= 20; i++){
		printf("Digite a altura do jogador %i \n",i);
		scanf("%f", &alt);
		
		if(alt > 1.73){
		contador = contador + 1;
		}	
	}
	
	printf("O numero de jogadores acima da media e %i", contador);
	
	return 0;
}
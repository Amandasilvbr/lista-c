#include <stdio.h>
#include <string.h>
#include <math.h>

int main(){
	
	float alt, peso;
	char genero;
	
	printf("Digite M se for homem e F se for mulher\n");
	scanf("%c",&genero);
	printf("Digite sua altura \n");
	scanf("%f", &alt);
	
	if(genero == 'F'){
		peso = (62.1*alt) - 44.7;
		printf("Seu peso ideial e %f", peso);
	} 
	else if (genero == 'M'){
		peso = (72.7*alt) - 58;
		printf("Seu peso ideial e %f", peso);
	} 
	else {
		printf("Opcao invalida");
	}
	
	return 0;
}
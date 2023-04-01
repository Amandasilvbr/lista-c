#include <stdio.h>
#include <string.h>

int main(){
	
	float preco, consumo;
	char nome[100];
	
	printf("Digite o nome do posto\n");
	scanf("%s", &nome);
	
	printf("Digite o consumo anual do posto\n");
	scanf("%f", &consumo);
	
	if(consumo <= 50000){
		preco = 4.93 + (4.93*0.2);
		printf("O preco do combustivel do posto %s e %f", nome, preco);
	}
	else if (consumo > 50000){
		preco = 4.93 + (4.93*0.12);
		printf("O preco do combustivel do posto %s e %f", nome, preco);
	} 
	
	return 0;
}
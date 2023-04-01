#include <stdio.h>
#include <math.h>

int potencia(float base, float expoente){
	return pow(base,expoente);
}

void main(){
	float base, expoente, resultado;
	
	printf("Digite a base da potencia: \n");
	scanf("%f", &base);
	printf("Digite o expoente da potencia: \n");
	scanf("%f", &expoente);
	
	resultado = potencia(base, expoente);
	
	printf("O resultado é %f", resultado);
}
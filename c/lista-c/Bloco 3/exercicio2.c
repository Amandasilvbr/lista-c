#include <stdio.h>
#include<stdlib.h>
#include <math.h>

float potencia(float base, float expoente){
	
	return pow(base,expoente);

}

void main(){
	float base, expoente;
	
	printf("Digite a base da potência: \n");
	scanf("%f", &base);
	printf("Digite o expoente da potência: \n");
	scanf("%f", &expoente);
	
	printf("O resultado é %f", potencia(base, expoente));
	
}
#include <stdio.h>
#include <math.h>

int depreciacaoLin(float pv, float r, int n){
	return ((pv-r)/n);
}

void main(){
	int n;
	float pv, r, resultado;
	
	printf("Digite o custo da aquisicao: \n");
	scanf("%f", &pv);
	
	printf("Digite o valor residual: \n");
	scanf("%f", &r);
	
	printf("Digite o tempo da vida útil em anos: \n");
	scanf("%i", &n);
	
	resultado= depreciacaoLin(pv, r, n);
	
	printf("O resultado é %f", resultado);
}
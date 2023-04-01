#include <stdio.h>
#include <math.h>

float taxaMedia(float x, float xo, float y, float yo){
	return ((y-yo)/(x-xo));
}

void main(){
	float x, xo, y, yo, resultado;
	
	printf("Digite o valor de x: \n");
	scanf("%f", &x);
	
	printf("Digite o valor de xo: \n");
	scanf("%f", &xo);
	
	printf("Digite o valor de y: \n");
	scanf("%f", &y);

	printf("Digite o valor de yo: \n");
	scanf("%f", &yo);
	
	resultado= taxaMedia(x, xo, y, yo);
	
	printf("O resultado é %f", resultado);
}
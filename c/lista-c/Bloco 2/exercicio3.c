#include <stdio.h>
#include <math.h>

int main(){
	
	float espelho, piso, resultado;
		
	printf("Digite o tamanho do espelho\n");
	scanf("%f",&espelho);
	
	printf("Digite o tamanho do piso\n");
	scanf("%f", &piso);
	
	resultado = (2*espelho) + piso;
	
	if(resultado > 63 && resultado < 64){
		printf("Escada confortavel");
	} 
	else {
		printf("Escada desconfortavel");
	} 
	
	return 0;
}
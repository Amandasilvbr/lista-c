#include <stdio.h>
#include <math.h>

int calculoFib(int n){
	if (n == 1) {
        return 1;
    } else if (n != 0 && n != 1) {
        return calculoFib(n-1) + calculoFib(n-2);
    } else {
    	return 0;
	}
}

void main(){
	int n, resultado;
	
	printf("Digite o número: \n");
	scanf("%i", &n);
	
	resultado = calculoFib(n);
	
	printf("O resultado é %i", resultado);
}
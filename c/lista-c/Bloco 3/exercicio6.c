#include <stdio.h>
#include <math.h>

int somaNumeros(int n){
	int i, resultado;
	
	resultado= n;
	
	for (i=1; i<=n; i++){
		resultado += n-i;
	}
	return resultado;
}

void main(){
	int n;
	
	printf("Digite o valor de n: \n");
	scanf("%i", &n);
	
	printf("O resultado é %i", somaNumeros(n));
}
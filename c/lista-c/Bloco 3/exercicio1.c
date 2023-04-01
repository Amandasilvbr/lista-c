#include <stdio.h>

int fatorial(int n){
	
	printf("%d", n);
	printf("\n");
	
	if (n==0) {
		return 1;
	} else {
		return n*fatorial(n-1);
	}
}

void main(){
	int n;
	
	printf("Digite o número: ");
	scanf("%d", &n);
	
	printf("Fatorial de %d: %d\n", n, fatorial(n));
	
}
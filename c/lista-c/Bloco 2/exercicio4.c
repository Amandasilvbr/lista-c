#include <stdio.h>
#include <math.h>

int main(){
	
	float n1, n2, n3, med;
	int escolha;
	
	printf("Digite n1\n");
	scanf("%f",&n1);
	
	printf("Digite n2\n");
	scanf("%f",&n2);
	
	printf("Digite n3\n");
	scanf("%f",&n3);
	
	printf("Digite 1 para media aritmetica, 2 para media ponderada e 3 para media harmonica\n");
	scanf("%i",&escolha);
	
	if(escolha == 1){
		med = (n1+n2+n3)/3;
		printf("A media e %f", med);
	} 
	else if (escolha == 2){
		med = ((n1*3)+ (n2*3)+ (n3*4))/ 10;
		printf("A media e %f", med);
	} 
	else if (escolha == 3) {
		med = 3 / ((1/n1)+(1/n2)+(1/n3));
		printf("A media e %f", med);
	}
	
	return 0;
}
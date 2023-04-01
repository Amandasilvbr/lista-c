#include <stdio.h>
#include <string.h>
#include <math.h>

int main(){
	
	float sal;
	int idade1, idade2, num;
	
	printf("Digite a quantidade de filhos\n");
	scanf("%i",&num);
	
	printf("Digite a idade da mae\n");
	scanf("%i",&idade1);
	
	printf("Digite a idade do pai\n");
	scanf("%i",&idade2);
	
	printf("Digite o salario \n");
	scanf("%f", &sal);
	
	if(num >= 3 && idade1 > 30 && idade1 < 50 && idade2 > 40 && idade2 < 60 && sal <= 500){
		printf("Apta");
	} 
	else {
		printf("Não apta");
	}
	
	return 0;
}
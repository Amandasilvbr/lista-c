#include <stdio.h>
#include <math.h>

int main(){
    
    int sub, num1, num2;
   
    printf("Digite um número");
    scanf("%i", &num1);
    printf("Digite outro número");
    scanf("%i", &num2);

    if (num1==num2)
    {
        printf("Reinicie o código e digite dois números diferentes");
    } else if (num1<num2){
        printf("O maior número é %i", num2);
        sub= num1-num2;
        printf("O resultado da subtração é %i", sub);
    } else if (num2<num1){
        printf("O maior número é %i", num1);
        sub= num2-num1;
        printf("O resultado da subtração é %i", sub);
    }
    return 0;    
}

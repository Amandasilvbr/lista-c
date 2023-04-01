#include <stdio.h>
#include <math.h>

int main( ) {
    int a, b, c, delta;
    printf("Digite o valor de a");
    scanf("%i",&a);
    printf("Digite o valor de b");
    scanf("%i",&b);
    printf("Digite o valor de c");
    scanf("%i",&c);

    delta = pow(b,2)- (4*a*c);

    if (delta<0){
        printf("A equação não tem raízes reais");
    } else if (delta==0){
        printf("A equação possui apenas uma raiz real");
    } else if (delta!=0 && delta>0){
        printf("A equação possui duas raízes reais");
    }
    return 0;
}

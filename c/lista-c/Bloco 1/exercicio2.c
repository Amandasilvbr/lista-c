#include <stdio.h>
#include <math.h>

int main(){
    
    int alunos, i;
    float nota, total, media;

    printf("Digite a quantidade de alunos da sala");
    scanf("%i", &alunos);

    for (i=1; i<= alunos; i++){
        printf("Digite a nota do aluno %i", i);
        scanf("%f", &nota);
        total= total + nota;
        printf("%f",total);
    }

    media= total/(i-1);
    printf("A média dos alunos é %f", media);

    return 0;
}

#include <stdio.h>
 
int main() {

    printf(" Desafio Cartas\n1");

    int População ;
    float Área ;
    double PIB;
    int Números_de_pontos_turísticos;

    printf("Digite a População=\n");
    scanf("%d", &População);

    printf("Digite a Área=\n");
    scanf("%f", &Área);

    printf("Digite o PIB=\n");
    scanf("%f",&PIB);

    printf("Digite o Números de pontos turisticos=\n");
    scanf("%d",&Números_de_pontos_turísticos);

    printf("População: %d\n", &População);
    printf("Area: %f\n", &Área);
    printf("PIB: %f\n", &PIB);
    printf("Numero de pontos turisticos: %d\n",Números_de_pontos_turísticos);

    return 0;

    
}

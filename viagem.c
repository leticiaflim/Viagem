#include <stdio.h>

int main()
{
    float rend, tempo, velo, distancia, litros_usu;

    printf("Informe quantos KM o seu carro faz com 1L de gasolina: ");
    scanf("%f", &rend);

    printf("Informe a velocidade média durante a viagem: ");
    scanf("%f", &velo);

    printf("Informe o tempo gasto na viagem: ");
    scanf("%f", &tempo);

    distancia = tempo * velo;
    litros_usu = distancia / rend;

    printf("A distancia percorrida foi de %.1fkm \n Foi usado %.1f litros.", distancia, litros_usu);
}
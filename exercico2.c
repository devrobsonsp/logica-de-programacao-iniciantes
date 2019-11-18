//Exercicio 2
//Crie um programa em C que leia 4 números inteiros
// e mostre a média aritmética desses números.
#include <stdio.h>
int main()
{
float n1, n2, n3, n4;
double media;
printf("\n\n##################\n\n");
printf("\n calculo da media \n");
printf("\n entre com o primeiro numero \n");
scanf("%f", &n1);
printf("\n entre com o segundo numero \n");
scanf("%f", &n2);
printf("\n entre com o terceiro numero \n");
scanf("%f", &n3);
printf("\n entre com o quarto numero \n");
scanf("%f", &n4);
media=(n1+n2+n3+n4)/4;
printf("\n\n a media dos numeros digitados é %lf", media);
}
//Quando eu fiz com inteiros a media arredondava
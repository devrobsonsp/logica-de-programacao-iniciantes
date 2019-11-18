//Exercicio 1
//Faça um programa em C que irá calcular
// quantos litros de combustível serão gastos em uma viagem. 
//A distância da viagem e a média de consumo do carro 
//serão lidas de uma entrada que será feita (digitados).
#include <stdio.h>

int main () {
	float km, media;
	float consumo;
	printf("\n ################## \n");
	printf("\n Qual a distancia em km? \n");
	scanf("%f", &km);
	printf("\n Qual a media de concumo do veiculo? \n");
	scanf("%f", &media);
	consumo=km*media;
	printf("\n\n Nesta viagem serao gastos %f litros de gasolina\n\n ", consumo);
}
	
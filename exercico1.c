//Exercicio 1
//Fa�a um programa em C que ir� calcular
// quantos litros de combust�vel ser�o gastos em uma viagem. 
//A dist�ncia da viagem e a m�dia de consumo do carro 
//ser�o lidas de uma entrada que ser� feita (digitados).
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
	
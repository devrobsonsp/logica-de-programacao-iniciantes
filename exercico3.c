//Crie um programa em C que irá mostrar na tela os 5 próximos antecessores
// e os 5 sucessores de um número inteiro que será digitado.
#include <stdio.h>
int main() {
	int num, i;
	printf("\n entre com o numero \n");
	scanf("%d", &num);
	printf("########");
	i=0;
		for(i=1; i<=5; i++){
		num=num+1;
				printf("\n\n%d\n", num);
					}
					num=num-5;
	for(i=1; i<=5;i++)
	{
		num=num-1;
		
		printf("\n  %d\n", num);
	}
}
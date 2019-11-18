//Crie um programa em C para calcular o valor do 7º termo de uma PA 
//(Progressão Aritmética), sendo que o primeiro termo e a 
//razão serão digitados pelo usuário.
#include <stdio.h>
int main(){
	int n1, r, n7;
	printf("\n#############\n");
	printf("\n entre com o valor do primeiro termo\n");
	scanf("%d", &n1);
	printf("\n entre com o valor da razao\n");
	scanf("%d", &r);
n7=n1+6*r;
printf("\n\n\n O valor do setmio termo e %d\n\n\n", n7);
}
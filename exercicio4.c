//Crie um programa em C para calcular o valor do 7� termo de uma PA 
//(Progress�o Aritm�tica), sendo que o primeiro termo e a 
//raz�o ser�o digitados pelo usu�rio.
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
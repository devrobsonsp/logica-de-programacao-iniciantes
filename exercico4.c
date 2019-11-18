//Crie um programa em C para calcular o valor de um termo qualquer de uma PA 
//(Progressão Aritmética), sendo que o primeiro termo, a razão e o número do 
//termo que pretende conhecer o valor serão digitados pelo usuário
#include <stdio.h>
int main(){
	int a1, r, t, tn;
	printf("\n qual o valor do primeiro termo?\n");
	scanf("%d", &a1);
	printf("\n Qual a razao da PA?\n");
	scanf("%d", &r);
	printf("\n Qual termo quer calcular?\n");
	scanf("%d", &t);
	tn=a1+(t-1)*r;
	printf("\n\n o %d termo da PA e %d\n\n", t, tn);
}
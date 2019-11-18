#include <stdio.h>
int main(){
	int numero, i, tab;
	printf("\n\npara qual numero voce gostaria de calcular a tabuada?\n\n");
	scanf("%d", &numero);
		for(i=0;i<=10;i++){
		tab=numero*i;
		printf("%d X %d = %d\n",numero, i,tab);
	}
}
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define N 1024
#define M 32765

int main(){
	
	int i, x, cont=0, v[N];
	int y, cont2=0, vet[M];
	int a, pivo, comeco=0, fim=N-1, conta=0;
	int b, pivo2, comeco2=0, fim2=M-1, contb=0;
	
	for(i=0; i<N; i++){
		v[i]=i;
	}
	
	printf("Digite o elemento que deseja buscar de forma SEQUENCIAL (0 a 1024): ");
	scanf("%d", &x);
	
	for(i=0; i<N; i++){
		cont++;
		if(x==v[i]){
			printf("Elemento encontrado!!");
			printf("\nNumero de comparacoes: %d",cont);
			break;
		}
	}
	//-------------------------------------------------------------------------------------------------------
	for(i=0; i<M; i++){
		vet[i]=i;
	}
	
	printf("\n\nDigite o elemento que deseja buscar de forma SEQUENCIAL (0 a 32765): ");
	scanf("%d", &y);
	
	for(i=0; i<M; i++){
		cont2++;
		if(y==vet[i]){
			printf("Elemento encontrado!!");
			printf("\nNumero de comparacoes: %d",cont2);
		 	break;
		}
	}
	
	//-------------------------------------------------------------------------------------------------------
	
	printf("\n\nDigite o elemento que deseja buscar de forma BINARIA (0 a 1024): ");
	scanf("%d", &a);
	
	while(comeco<=fim){
		conta++;
		pivo = (comeco + fim)/2;
		if(a == v[pivo]){
			printf("Elemento encontrado!!");
			printf("\nNumero de comparacoes: %d",conta);
			break;
		}else if(a < v[pivo]){
			fim = pivo - 1;
		}else if(a > v[pivo]){
			comeco = pivo + 1;
		}
	}
	
	//-------------------------------------------------------------------------------------------------------
	
	printf("\n\nDigite o elemento que deseja buscar de forma BINARIA (0 a 32765): ");
	scanf("%d", &b);
	
	while(comeco2<=fim2){
		contb++;
		pivo2 = (comeco2 + fim2)/2;
		if(b == vet[pivo2]){
			printf("Elemento encontrado!!");
			printf("\nNumero de comparacoes: %d",contb);
			break;
		}else if(b < vet[pivo2]){
			fim2 = pivo2 - 1;
		}else if(b > vet[pivo2]){
			comeco2 = pivo2 + 1;
		}
	}
	
}

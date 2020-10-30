/*1. Escreva um procedimento que, após a leitura dos dados, realizada por um
procedimento com o objetivo de ler os valores para uma string S e valor
para um número inteiro positivo N, exiba a string S por N vezes seguidas na
tela. Crie também o algoritmo principal.*/

#include<stdio.h>
#include<stdlib.h>

void procedimento();

void main(){

	procedimento();
	
}


void procedimento(){
	char nome[10];
	int N=0 ,i=0;
	
	printf("digite o nome  ");
	scanf("%s",&nome);
	
	printf("digite a quantidade de vezes para repetir o nome :  ");
	scanf("%i",&N);
	
    for(i=0;i<N;i++)
		printf("%s\n",nome);
}



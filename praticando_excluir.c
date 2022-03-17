#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//variaveis globais para usar nas funções
float notas[3];
float *pnotas;
int op;
int posicao;

void inserir(float notas[3]);
void imprimir(float notas[3], float *pnotas);
void excluir(float notas[3], float *pnotas, int posicao);
void menu();

int main(){

	//chamada da função principal
	menu();

	return 0;
}

//funcao principal
void menu(){
	
	do{	
		printf("Digite a opcao:\n");
		printf("[1]-inserir notas\n");
		printf("[2]-imprimir notas:\n");
		printf("[3]-excluir nota:\n");
		printf("[4]-sair\n");
		scanf("%d", &op);//lê a opcao desejada
		
		switch(op){
			case 1:
				inserir(notas);
				pnotas = notas;
			break;
			case 2:
				imprimir(notas, pnotas);
			break;
			case 3:
				excluir(notas, pnotas, posicao);
			break;
			case 4:
				printf("\nSaindo do sistema\n...");
			break;
		}
		
	}while(op<=3);
}

//funcao para imprimir os elementos
void imprimir(float notas[3], float *pnotas){
	printf("notas:\n");
	for(int i=0; i<3; i++){
		printf("\t %.1f\n", *pnotas);
		pnotas++;
	}
}

//funcao para inserir os elementos
void inserir(float notas[3]){
	printf("digite as tres notas:\n");
	for(int i=0; i<3; i++){
		scanf("%f", &notas[i]);
	}
}

//funcao para excluir um elemento
void excluir(float notas[3], float *pnotas, int posicao){
	
	printf("Digite a posicao da nota que voce deseja excluir:\n");
	scanf("%d", &posicao);//variavel para armazenar a posicao do conteudo do indice
	
	for(int i=0; i<3; i++){
		if(posicao==i){//igualando o conteudo da variavel ao indice do vetor
		notas[i] = NULL;//excluindo o conteudo do indice
		}
	}
	//posicao--;
}

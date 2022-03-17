#include<stdio.h>
#include<stdlib.h>

//variaveis globais para uso nas funções
int op;
int pos=0;
float notas[3];

void imprimir_vetor(float notas[0]);
void inserir_vetor(float notas[0], int *pos);
void menu();

int main(){
	
	//função para chamar o menu do code
	menu();
	
	return 0;
}

void menu(){
	
	//menu do programa
	//do-while para repitir as opções do switch
	do{
		printf("-------------------\n");
		printf("Seja Bem Vindo!!\n");
		printf("-------------------\n");
		printf("digite a opcao para:\n");
		printf("1-Inserir\n");
		printf("2-Imprimir\n");
		printf("3-Sair\n");
		scanf("%d", &op);
		
		//switch para o usuário selecionar as opções
		switch(op){
			case 1:
				inserir_vetor(notas, &pos);
				inserir_vetor(notas, &pos);
				inserir_vetor(notas, &pos);
			break;
			case 2:
				imprimir_vetor(notas);
			break;
			case 3:
				printf("\t\t...Saindo...");
		}
		
	//condição de parada:
	}while(op<2);
}

//imprimir elementos
void imprimir_vetor(float notas[0]){
	for(int i=0; i<3; i++){
		printf("\t %.1f", notas[i]);
	}
	printf("\n");
}

//insere elementos
void inserir_vetor(float notas[0], int *pos){//passando vetor e ponteiro por refência
	
	printf("digite a nota:\n");//pedindo para o usuário passar uma nota
	scanf("%f", &notas[*pos]);//pegando a nota que o usuário vai passar e botando ela dentro do vetor com ponteiro
	*(pos)++;//incrementando o valor no qual o ponteiro está apontando
	
}

#include<stdio.h>
#include<stdlib.h>

float notas[3];

void imprimir_vetor();
void inserir_vetor(float notas);

int main(){
	
	//float notas[3];
	float *pnotas;
	
	printf("digite uma nota:\n");
	scanf("%f", &notas[0]);
	
	imprimir_vetor(notas);
	
	pnotas = notas;
	
	printf("primeiro elemento do vetor: %.1f\n", *pnotas);
	printf("endereco da primeira posicao: %p\n", notas);
	printf("endereco da primeira posicao: %p\n", &notas[0]);
	
	imprimir_vetor();
	
	/*printf("elementos do vetor:\n");
	for(int i=0; i<3; i++){
		printf("\t%.1f \n", *pnotas);
		pnotas++;
	}*/
	
	//pnotas = notas;
	
	/*
	printf("elementos do vetor:\n");
	for(int i=0; i<3; i++){
		printf("\t%.1f \n", pnotas[i]);
		
	}*/
	
	//outras formas de imprimir o vetor
	//pnota++
	//pnota+i
	//pnota[i]
	//*(pnota+)
	
	//printf("Nota: %.1f\n", nota);
	
	/*pnota = &nota;
	
	printf("Nota: %.1f\n", *pnota);
	printf("Endereco da variavel nota: %p\n", &nota);
	printf("Endereco do ponteiro: %p\n", &pnota);
	
	(*pnota)++;
	
	printf("Nota incrementada: %.1f\n", *pnota);	
	
	*pnota = 10;
	
	printf("Nota modificada: %.1f", *pnota);*/
	
	return 0;
}

void imprimir_vetor(){
	printf("elementos do vetor:\n");
	for(int i=0; i<3; i++){
		printf("\t%.1f \n", notas[i]);
	}
}

void inserir_vetor(float notas){
	printf("Digite 3 notas:\n");
	for(int i=0; i<3; i++){
		scanf("%f", &notas[i]);
	}
}

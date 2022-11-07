/*
* Nome: Felipi Yuri Santos
* NUSP: 11917292
* Nome: João Gabriel Manfré Nazar
* NUSP: 13733652
* 
* Curso: SCC0220 - Laboratório de Introdução à Ciência da Computação II 
* Prof. Diego Furtado Silva
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void quickSort(int* vetor, int inicio, int fim){
	if (fim <= inicio)
		return;
	
	int pivo = inicio;
	int i = inicio+1;
	int j = fim;
    int aux;

	while (i <= j){
		while (i <= j && vetor[i] <= vetor[pivo]) i++; 
		while (vetor[j] > vetor[pivo]) j--;

		if (j > i){
			aux = vetor[i];
			vetor[i] = vetor[j];
			vetor[j] = aux;
			i++;
			j--; 
		}
	}

	pivo = j;
	aux = vetor[pivo];
	vetor[pivo] = vetor[inicio];
	vetor[inicio] = aux;

	quickSort(vetor, inicio, pivo-1);
	quickSort(vetor, pivo+1, fim);	
}

int main(){
	int n;
	scanf("%d", &n);

	int *vec = (int *) malloc(n * sizeof(int));
	
	int i = 0;
	while(i < n)
		scanf("%d ", &vec[i++]);

	quickSort(vec, 0, n - 1);
    
    i = 0;
    while (i < n)
		printf("%d ", vec[i++]);

    free(vec);
	return 0;
}
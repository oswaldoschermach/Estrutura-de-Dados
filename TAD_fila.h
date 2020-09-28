#ifndef __fila__
#define __fila__

#include <stdio.h>
#include <stdlib.h>

typedef struct fila {
  int tam;	
  int ini;	
  int fim;
  int *vetor; 
} Fila;  

int cheia (Fila *f);
void inserir_fila (Fila *f, int elem);
int vazia (Fila *f);
int remover_fila (Fila *f);
void imprimir_fila (Fila *f);
Fila* criar_fila (int tam);
void destruir_fila (Fila *f);


#endif

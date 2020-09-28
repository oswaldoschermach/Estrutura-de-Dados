#include "fila.h"

int cheia (Fila *f) {
  return (((f->fim + 1) % f->tam) == f->ini); 
}

void inserir_fila (Fila *f, int elem) {
  if (cheia(f)) {
    printf ("fila cheia\n");
    exit(1);    
  }	  
  f->vetor[f->fim] = elem;
  /*if (f->fim >= f->tam) 
     f->fim = 0
  else 	     
     f->fim++;*/
  f->fim = (f->fim + 1) % f->tam;
}

int vazia (Fila *f){
  return (f->ini == f->fim); 
}	

int remover_fila (Fila *f) {
  if (vazia(f)) {
    printf ("fila vazia\n");
    exit(1);    
  }	  
  int elem = f->vetor[f->ini];
  f->ini = (f->ini + 1) % f->tam;
  return elem;
}

void imprimir_fila (Fila *f) {
  int i;
  printf ("Fila (cabeca): ");
  for (i = f->ini; i != f->fim; i=(i+1)%f->tam) {
    printf ("%d ", f->vetor[i]);	   
  }	  
  printf ("(cauda)\n");
}

Fila* criar_fila (int tam) {
  Fila *f = (Fila *)malloc(sizeof(Fila));
  f->tam = tam;	
  f->ini = 0;	
  f->fim = 0;
  f->vetor = (int *)malloc(tam * sizeof(int)); 
  return f;
}  

void destruir_fila (Fila *f) {
  free (f->vetor);
  free (f);
}










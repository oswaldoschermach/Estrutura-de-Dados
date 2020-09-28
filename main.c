#include "fila.h"

int main () {
  int tam = 20;	
  Fila *f = criar_fila (tam);	
  int i;
  for (i = 0; i < 10; i++) {
    inserir_fila (f, i);	  
  }
  remover_fila (f);
  imprimir_fila (f);
  destruir_fila (f); 
  return 0;
}












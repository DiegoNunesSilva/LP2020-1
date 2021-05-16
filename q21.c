#include <stdio.h>
#define val_maximo 100
int main(){
  
  int i;
  int leitura_atual;
  int leitura_inicial;
  int contador = 1;
  int contador2 = 0;

  scanf("%i", &leitura_inicial);
 
  for(i=1; i<val_maximo; i++){
 
    scanf("%i", &leitura_atual);
 
    if(leitura_atual == leitura_inicial){
      contador++;
    if (contador > contador2){
          contador2 = contador;
        }
      }
     leitura_inicial = leitura_atual;
  }
 printf("%i", contador);
 
 
  return 0;
}
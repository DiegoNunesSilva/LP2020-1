#include <stdio.h>

int main(){
int valor,resto,n100,n50,n20,n10,n5,n2,n1;

scanf("%i", &valor);

n100 = valor / 100 ;
resto = valor % 100 ;

n50 = resto / 50 ;
resto = resto % 50 ;

n20 = resto / 20 ;
resto = resto % 20 ;

n10 = resto / 10 ;
resto = resto % 10 ;

n5 = resto / 5 ;
resto = resto % 5 ;

n2 = resto / 2 ;
resto = resto % 2 ;

n1 = resto / 1 ;
resto = resto % 1 ;

printf("%i Notas de R$ 100\n",n100);
printf("%i Notas de R$ 50\n",n50);
printf("%i Notas de R$ 20\n",n20);
printf("%i Notas de R$ 10\n",n10);
printf("%i Notas de R$ 5\n",n5);
printf("%i Notas de R$ 2\n",n2);
printf("%i Notas de R$ 1\n",n1);


return 0;
  
  }

  			

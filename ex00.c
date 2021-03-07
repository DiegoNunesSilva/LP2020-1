#include <stdio.h>
int main(void) {
  int a,b;
	printf("Digite um numero ");
	scanf("%i", &a);
	printf("Digite um numero ");
	scanf("%i", &b);
	if(a<b){
		printf("%i %i",a,b);
	}else{
		printf("%i %i", b,a);
	}
  return 0;
}
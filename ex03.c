#include <stdio.h>

int main(){
	int a,b,c;
	printf("Digite um numero:");
	scanf("%i", &a);
	printf("Digite um numero:");
	scanf("%i", &b);
	printf("Digite um numero ");
	scanf("%i", &c);
	if((a>=b+c) || (b>=a+c) || (c>=a+b)){
		printf("NAO FORMA");
	}else
		if ((a==b) && (a==c)){
			printf("EQUILATERO");		
	}else 
		if ((a==b) || (a==c) || (b==c)){
				printf("ISOSCELES");		
	}else
				printf("ESCALENO");
				
}
#include <stdio.h>

int main() {
	
	int contador = 0, soma = 0;
	
	while (contador<10) {
		soma += contador;
		contador++;
		printf("contador: %d \t soma: %d\n", contador, soma);
	}
	
	return 0;
}

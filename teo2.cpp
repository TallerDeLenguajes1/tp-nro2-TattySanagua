#include <stdio.h>
#include <stdlib.h>

int main(){

	int buff[5] = {5, 15, 30, 10, 35};
	int *p;
	int i, elemento, x;

	p = buff;

	for(i=0; i<=4; i++){
		elemento  = buff[i];
		printf("Cada elemento del arreglo es: %d \n", elemento);
	}

	for(i=0; i<=4; i++){
		printf("Cada elemento del arreglo es: %d \n", *p);
		p++;
	}

	for(i=0; i<=4; i++){
		x = *(buff + i);
		printf("Cada elemento del arreglo es: %d \n", x);
	}

	for(i=0; i<=4; i++){
		printf("Direcciones de memoria de los elementos: %p \n", &buff[i]);
	}

	printf("Tamanio del arreglo: %d \n", sizeof(buff));
	printf("Tamanio del puntero: %d \n", sizeof(p));

	return 0;

}
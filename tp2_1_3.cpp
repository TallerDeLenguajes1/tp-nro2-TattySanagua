#include <conio.h>
#include <alloc.h>
#include <stdlib.h>

const fila = 15;
const columna = 5+random(15);


int main (){

	int i, j, num, cont =0,k;

	int *mat, *vector;

	cprintf("Numero de filas = 15, Numero de columnas = %d\r\n\n", columna);

	mat = (int*)malloc(fila*columna*sizeof(int));

	vector = (int*)malloc(fila*sizeof(int));

	cprintf("Matriz cargada: \r\n\n");

	for(i=0; i<fila; i++){

		for(j=0; j<columna; j++){

			*(mat+(i*columna+ j))= 100+random(999);
			num = *(mat+(i*columna+ j));

			cprintf("%5d", num);
			cprintf(" ");

			if(num%2 == 0){
				cont++;

			}
		}
		cprintf("  Pares = %d", cont);

		*(vector+i)=cont;

		cont =0;
		cprintf("\r\n");
	}

	cprintf("\r\n\n");
	cprintf("Vector de cantidades pares por fila: \r\n\n");

	for(k=0; k<fila; k++){
		
		cprintf("Vector[%d]: %d \r\n",k,*(vector+k));
	}


	return 0;
}

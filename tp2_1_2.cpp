#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

#define N 4
#define M 5

int main (){

	int f, c;
	double mt[N][M];

	double *puntmat;

	clrscr();

	cprintf("Matriz cargada con notacion subindexada: \r\n\n");

	for(f=0; f<N; f++){

		for(c=0; c<M; c++){

			cprintf("%.2lf", mt[f][c] = 100+random(900));
			cprintf(" ");
		}
		cprintf("\r\n");
	}
	//cprintf("\r\n");getch();

	puntmat = &mt[0][0];

	cprintf("\n\nMatriz con Aritmetica de punteros: \r\n\n");

	for(f=0; f<N; f++){

		for(c=0; c<M; c++){

			cprintf("%.2lf", *(puntmat+(f*M+ c)));
			cprintf(" ");
		}
		cprintf("\r\n");
	}

	return 0;
}
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

#define N 4
#define M 5

int main (){

	int f, c;
	double mt[N][M];

	cprintf("Matriz cargada con notacion subindexada: \r\n");

	for(f=0; f<N; f++){

		for(c=0; c<M; c++){

			cprintf("%lf  ", mt[f][c] = 100+random(900));
			cprintf("\r\n");
		}
	}
	cprintf("\r\n");


	return 0;
}
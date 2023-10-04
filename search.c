#include <stdio.h>

int Normal_Search( int arreglo[] ,int numero, int longitud ) {
	for ( int i =0; i < longitud; i++) {
		if ( arreglo[i] == numero ) {
			printf("El indice del numero es : %d\n", i);
			return i;
		}
	}
	printf("El valor no fue encontrado :(\n");
	return -1;
}



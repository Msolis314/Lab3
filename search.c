#include <stdio.h>
/*Esta funcion realiza una busqueda lineal de un muero dentro de un arreglo
 *Tiene por parametros el arreglo, el numero a buscar y el size
 *Devuelve el indice del numero si lo encuentra o imprime un mensaje de error en caso contrario y devuelve -1
 * */
int Normal_Search( int arreglo[] ,int numero, int longitud ) {
	for ( int i =0; i < longitud; i++) {
		if ( arreglo[i] == numero ) {
			printf("El índice del número es : %d\n", i);
			return i;
		}
	}
	printf("El valor no fue encontrado :(\n");
	return -1;
}



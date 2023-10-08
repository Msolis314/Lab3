#include <stdio.h>

/*Este programa se encarga de buscar el valor minimo y maximo dentro de un arreglo usando punteros
 *
 *Nombres_Funciones
 *nombres_variables
 * */

/*Funcion que encuentra el minimo
 *recibe el arreglo y el size
 Retorna el minimo
 **/
int Min( int array[] , int size ) {
	int min = array[0];
	for ( int i = 1 ; i < size ; i++) {
		if ( array[i] < min ) {
			min = array[i];
		}
	}
	return min;

}

/*Funcion que encuentra el maximo
 *recibe el arreglo y el size
 Retorna el maximo
 **/

int Max( int array[] , int size) {
	int max = array[0];
	for ( int i = 1 ; i < size ; i++) {
		if ( array[i] > max) {
			max = array[i];
		}
	}
	return max;
}
// Esta es la funcion que utiliza punteros para obtener el minimo y el maximo
void Pointer_MIN_MAX( int *array, int *min, int *max , int size) {
	*min = *array;
	*max = *array;

	for ( int i = 1; i < size; i++) {
		if ( *(array +i) < *min ) {
			*min= *(array +i);
		} else if (*(array +i) > *max) {
			*max = *(array +i);

		}

	}
}
int main() {
	int arreglo[] = {21,24,65,3,56,12,35,15};
	
	int longitud = sizeof(arreglo)/sizeof(arreglo[0]);
	//Creo las variables para poder obtener su direccion.
	int minimo, maximo ;

	Pointer_MIN_MAX( arreglo , &minimo , &maximo , longitud);

       	printf("Minimo: %d\n", minimo);	
	printf("Maximo: %d\n", maximo);
	// Otra variable para mostrar el resultado de la funcion Min
	int min_normal = Min( arreglo , longitud);

	//Otra variable para mostrar el resultado de la funcion Max
	int max_normal = Max( arreglo, longitud);

	printf(" El minimo sin punteros : %d \n El maximo sin punteros : %d \n", min_normal, max_normal);
	return 0;
}

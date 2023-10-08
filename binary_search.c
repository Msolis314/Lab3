#include <stdio.h>
#include "search.h"
// int Binary(int arreglo[] , int numero , int min_index, int max_index) {

//	int mid;
	/*min_indez <= max_index es porque cuando se calcule mid va a dar
	 * el mismo indice, sino es el numero buscado  siempre se va a incumplir
	 * la condicion. 
	 *
	 * */
/*	while ( min_index <= max_index ) {
		mid = (min_index + max_index)/2;
		if ( arreglo[mid] > numero ) {
			// Ahora considero el intervalo a la izquierda de mid por eso le resto uno y lo asigno a max_index
			
			max_index = mid - 1;

			continue;
		} else if ( arreglo[ mid ] < numero ) {
			min_index = mid + 1;
			continue;
		} else if ( arreglo[mid] == numero) {
			printf("El indice del numero es: %d\n",mid);
			return mid;
		}
	}

	printf("El valor no fue encontrado :(\n ");
	return -1;
}

int Recursive_Binary(int arreglo[], int numero , int min_index , int max_index) {
	if ( min_index > max_index) {
		printf("El valor no fue encontrado :(\n");
		return -1;

		//Condicion de parada
	}
	int mid = (min_index + max_index)/2;
	if ( arreglo[mid] == numero ) {
		printf("El indice del numero es: %d\n",mid);

	} else if ( arreglo[mid] > numero ) {
		return Recursive_Binary( arreglo , numero , min_index , max_index  = mid -1);
	} else {
		return Recursive_Binary( arreglo, numero, min_index = mid +1 , max_index);
	}
	return 0;
}
int main() {
	int array[] = {2,4,6,23,56,79};
	int longitud = sizeof(array)/sizeof(array[0]);
	//Hay que definir la longitud del array para poder tener los indices
	
	int choice, min_index = 0, max_index = longitud -1;

	printf("Digite un entero:\n");

	scanf("%d", &choice);

	Binary( array , choice  , min_index , max_index);
	Recursive_Binary ( array , choice , min_index , max_index);
	Normal_Search ( array, choice , longitud);
	return 0;
}*/

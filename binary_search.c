#include <stdio.h>
int binary(int arreglo[] , int numero , int size) {
	int min_index = 0;
	//Se inicia en indice 0
	//Se le resta uno a size para tener el indice del ultimo elemento
	int max_index = size -1;
	int mid;
	/*min_indez <= max_index es porque cuando se calcule mid va a dar
	 * el mismo indice, sino es el numero buscado  siempre se va a incumplir
	 * la condicion. 
	 *
	 * */
	while ( min_index <= max_index ) {

		mid = (min_index + max_index)/2;
		printf("%d",mid);
		if ( arreglo[mid] < numero ) {
			// Ahora considero el intervalo a la izquierda de mid por eso le resto uno y lo asigno a max_index
			
			max_index = mid - 1;

			continue;
		} else if ( arreglo[ mid ] > numero ) {
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
int main() {
	int array[] = {2,4,6,23,56,79};
	int longitud = sizeof(array)/sizeof(array[0]);
	//Hay que definir la longitud del array para poder tener los indices
	
	int choice;

	printf("Digite un entero:\n");

	scanf("%d", &choice);

	printf("%d\n",choice);

	binary( array , choice  , longitud);
	
	return 0;
}

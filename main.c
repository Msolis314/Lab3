#include <stdio.h>

#include "search.h"
/*Ejercicio de busqueda de un valor en un arreglo
 *Nombre_Funciones
 *nombre_variables
 *
 * */

int main() {
        int array[] = {2,4,6,23,56,79};

	// Para obtener la longitud del arreglo se divide el size y bytes del arreglo entre el size en bytes de un elemento
        int longitud = sizeof(array)/sizeof(array[0]);
        //Hay que definir la longitud del array para poder tener los indices

        int choice, min_index = 0, max_index = longitud -1;

        printf("Digite un entero:\n");

        scanf("%d", &choice);
	// Llamado a las funciones

        Binary( array , choice  , min_index , max_index);
        Recursive_Binary ( array , choice , min_index , max_index);
        Normal_Search ( array, choice , longitud);
        return 0;
}


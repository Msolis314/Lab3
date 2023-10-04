
#include <stdio.h>

int Recursive_Binary(int arreglo[], int numero , int min_index , int max_index) {
        if ( min_index > max_index) {
                printf("El valor no fue encontrado :(\n");
                return -1;

                //Condicion de parada
        }
        int mid = (min_index + max_index)/2;
        if ( arreglo[mid] == numero ) {
                printf("El índice del número es: %d\n",mid);

        } else if ( arreglo[mid] > numero ) {
		// Vuelve a llamar a la funcion pero le cambio el maximo para recortar el intervalo
                return Recursive_Binary( arreglo , numero , min_index , max_index  = mid -1);
        } else {
		// Vuelve a llamar a la funcion pero le cambio el minimo para recortar el intervalo
                return Recursive_Binary( arreglo, numero, min_index = mid +1 , max_index);
        }
        return 0;
}

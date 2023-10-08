#include <stdio.h>

/*Esta funcion realiza unas busqueda binaria de un numero en un arreglo
 *Recibe el arreglo, el numero y el indice minimo incial y maximo inicial
 *Retorna el indice en caso de encontrarlo o imprime un mensaje de error
 * */

int Binary(int arreglo[] , int numero , int min_index, int max_index) {

        int mid;
        /*min_indez <= max_index es porque cuando se calcule mid va a dar
         * el mismo indice, sino es el numero buscado  siempre se va a incumplir
         * la condicion. 
         *
         * */
        while ( min_index <= max_index ) {

                mid = (min_index + max_index)/2;
                if ( arreglo[mid] > numero ) {
                        // Ahora considero el intervalo a la izquierda de mid por eso le resto uno y lo asigno a max_index

                        max_index = mid - 1;

                        continue;
                } else if ( arreglo[ mid ] < numero ) {
                        min_index = mid + 1;
                        continue;
                } else if ( arreglo[mid] == numero) {
                        printf("El índice del número es: %d\n",mid);
                        return mid;
                }
        }

        printf("El valor no fue encontrado :(\n ");
        return -1;
}


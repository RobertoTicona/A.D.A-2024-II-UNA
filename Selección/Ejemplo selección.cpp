// Ejemplo m�todo de selecci�n

#include <iostream>
#include <stdlib.h>

using namespace std;

// Funci�n para ordenar el arreglo usando el m�todo de selecci�n
void selectionSort(int arr[], int n) {
	// Recorremos cada posici�n del arreglo hasta el pen�ltimo elemento
	for (int i = 0; i < n - 1; i++) {
		// Suponemos que el elemento en la posici�n 'i' es el m�nimo
		int minIdx = i;

		// Bucle para encontrar el elemento m�s peque�o en la sublista a partir de 'i+1'
		for (int j = i + 1; j < n; j++) {
			// Si encontramos un elemento menor que el actual m�nimo, actualizamos 'minIdx'
			if (arr[j] < arr[minIdx])
				minIdx = j;
		}

		// Intercambiamos el elemento m�nimo encontrado con el elemento en la posici�n 'i'
		swap(arr[i], arr[minIdx]);
	}
}

int main() {
	// Definimos el arreglo y calculamos su tama�o
	int arr[] = {40, 21, 4, 9, 10, 35};
	int n = sizeof(arr) / sizeof(arr[0]);

	// Llamamos a la funci�n de ordenamiento por selecci�n
	selectionSort(arr, n);

	// Imprimimos el arreglo ordenado
	for (int i = 0; i < n; i++) cout << arr[i] << " ";

	// Pausa el programa para ver el resultado antes de que la consola se cierre
	system("pause");

	// Fin del programa
	return 0;
}


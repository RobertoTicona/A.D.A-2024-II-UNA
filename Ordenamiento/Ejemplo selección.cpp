// Ejemplo método de selección

#include <iostream>
#include <stdlib.h>

using namespace std;

// Función para ordenar el arreglo usando el método de selección
void selectionSort(int arr[], int n) {
	// Recorremos cada posición del arreglo hasta el penúltimo elemento
	for (int i = 0; i < n - 1; i++) {
		// Suponemos que el elemento en la posición 'i' es el mínimo
		int minIdx = i;

		// Bucle para encontrar el elemento más pequeño en la sublista a partir de 'i+1'
		for (int j = i + 1; j < n; j++) {
			// Si encontramos un elemento menor que el actual mínimo, actualizamos 'minIdx'
			if (arr[j] < arr[minIdx])
				minIdx = j;
		}

		// Intercambiamos el elemento mínimo encontrado con el elemento en la posición 'i'
		swap(arr[i], arr[minIdx]);
	}
}

int main() {
	// Definimos el arreglo y calculamos su tamaño
	int arr[] = {40, 21, 4, 9, 10, 35};
	int n = sizeof(arr) / sizeof(arr[0]);

	// Llamamos a la función de ordenamiento por selección
	selectionSort(arr, n);

	// Imprimimos el arreglo ordenado
	for (int i = 0; i < n; i++) cout << arr[i] << " ";

	// Pausa el programa para ver el resultado antes de que la consola se cierre
	system("pause");

	// Fin del programa
	return 0;
}


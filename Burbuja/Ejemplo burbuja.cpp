// Ejemplo m�todo burbuja

#include <iostream>
#include <stdlib.h>

using namespace std;

void bubbleSort(int arr[], int n) {
	for (int i = 0; i < n - 1; i++) {  // Pasadas sobre el arreglo
		for (int j = 0; j < n - i - 1; j++) {  // Comparaciones en cada pasada
			// Condici�n para intercambiar si el elemento actual es mayor que el siguiente
			if (arr[j] > arr[j + 1]) 
				swap(arr[j], arr[j + 1]);  // Intercambia los elementos adyacentes
		}
	}
}

int main() {
	int arr[] = {40, 21, 4, 9, 10, 35};
	int n = sizeof(arr) / sizeof(arr[0]);  // Calcula el tama�o del arreglo
	bubbleSort(arr, n);  // Llama a la funci�n para ordenar el arreglo

	// Imprime el arreglo ordenado
	for (int i = 0; i < n; i++) cout << arr[i] << " ";
	cout << endl;

	system("pause");  // Pausa para ver el resultado
	return 0;
}


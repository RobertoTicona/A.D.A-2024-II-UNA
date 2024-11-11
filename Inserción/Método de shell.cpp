//M�todo de shell

#include <iostream>
#include <stdlib.h>

using namespace std;

void shellSort(int arr[], int n) {
	for (int gap = n / 2; gap > 0; gap /= 2) {  // Disminuye el gap en cada iteraci�n
		for (int i = gap; i < n; i++) {  // Empieza desde el �ndice "gap" hasta el final
			int temp = arr[i];  // Almacena el valor actual en una variable temporal
			int j;

			// Recorre el arreglo con el intervalo "gap" para ordenar los elementos
			for (j = i; j >= gap && arr[j - gap] > temp; j -= gap) {
				arr[j] = arr[j - gap];  // Desplaza los elementos hacia adelante
			}

			arr[j] = temp;  // Coloca el valor temporal en la posici�n correcta
		}
	}
}

int main() {
	int arr[] = {40, 21, 4, 9, 10, 35};
	int n = sizeof(arr) / sizeof(arr[0]);
	shellSort(arr, n);

	cout << "Arreglo ordenado: ";
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;

	system("pause");
	return 0;
}


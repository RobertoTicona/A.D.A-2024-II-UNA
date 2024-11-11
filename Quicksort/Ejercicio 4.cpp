// 4. Ordenamiento rápido (Quicksort)

#include <iostream>
#include <stdlib.h>

using namespace std;

int partition(int arr[], int low, int high) {
	int pivot = arr[high];
	int i = low - 1;
	for (int j = low; j < high; j++) {
		if (arr[j] < pivot) {
			i++;
			swap(arr[i], arr[j]);
		}
	}
	swap(arr[i + 1], arr[high]);
	return i + 1;
}

void quickSort(int arr[], int low, int high) {
	if (low < high) {
		int pi = partition(arr, low, high);
		quickSort(arr, low, pi - 1);
		quickSort(arr, pi + 1, high);
	}
}

int main() {
	int arr[] = {850, 230, 690, 540, 310};
	int n = sizeof(arr)/sizeof(arr[0]);
	
	cout << "Lista desordenada: " << endl;
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
	
	cout << "\n\nLista ordenada: " << endl;
	
	quickSort(arr, 0, n - 1);
	for (int i = 0; i < n; i++) cout << arr[i] << " ";
	return 0;
}

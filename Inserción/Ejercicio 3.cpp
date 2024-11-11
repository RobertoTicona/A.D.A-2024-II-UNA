// 3. Ordenamiento por inserción directa

#include <iostream>
#include <stdlib.h>

using namespace std;

void insertionSort(int arr[], int n) {
	for (int i = 1; i < n; i++) {
		int key = arr[i];
		int j = i - 1;
		while (j >= 0 && arr[j] > key) {
			arr[j + 1] = arr[j];
			j--;
		}
		arr[j + 1] = key;
	}
}

int main() {
	int arr[] = {250, 120, 300, 95, 210};
	int n = sizeof(arr)/sizeof(arr[0]);
	
	cout << "Lista desordenada: " << endl;
	
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
	insertionSort(arr,n);
	
	cout << "\n\nLista ordenada: " << endl;
	
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
	
	system("pause");
	return 0;
}

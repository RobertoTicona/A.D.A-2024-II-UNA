// Ejemplo método por inserción directa

#include <iostream>
#include <stdlib.h>

using namespace std;

void insertionSort(int arr[], int n) {
	for (int i = 1; i < n; i ++) {
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
	int arr[] = {40, 21, 4, 9, 10, 36};
	int n = sizeof(arr) / sizeof(arr[0]);
	insertionSort(arr, n);
	for (int i = 0; i < n; i++) cout << arr[i] << " ";
	system("pause");
	return 0;
}

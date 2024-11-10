// Ejemplo método de selección

#include <iostream>
#include <stdlib.h>

using namespace std;

void selectionSort(int arr[], int n) {
	for (int i = 0; i < n - 1; i ++) {
		int minIdx = i;
		for (int j = i + 1; j < n; j++) {
			if (arr[j] < arr[minIdx])
				minIdx = j;
		}
		swap(arr[i], arr[minIdx]);
	}
}

int main() {
	int arr[] = {40 , 21, 4, 9, 10, 35};
	int n = sizeof (arr)/sizeof(arr[0]);
	selectionSort(arr, n);
	for (int i = 0; i < n; i++) cout << arr[i] << " ";
	system("pause");
	return 0;
}

// 1. Ordenamiento por selecci�n

#include <iostream>
#include <stdlib.h>

using namespace std;

int main () {
	int lista[] = {589, 320, 760, 435, 520};
	
	int i,min,j,aux;
	int comparaciones = 0;
	
	//Imprimir lista DESORDENADA
	
	cout << "Valores desordenados\n";
	
	for (i = 0; i < 5; i++) {
		cout << lista[i] << " ";
	}
	
	//Algoritmo de ordenamiento por selecci�n
	
	for (i = 0; i < 5; i++) {
		min = i;
		for (j = i+1; j < 5; j++) {
			comparaciones++;
			//condicion para encontrar el menor elemento
			if (lista[j] < lista[min]){
				min = j;
			}	
		}
		aux = lista[i];
		lista[i] = lista[min];
		lista[min] = aux;
	}

	//Imprimir lista ORDENADA
	
	cout << "\n\nValores ordenados\n";
	
	for (i = 0; i < 5; i++) {
		cout << lista[i] << " ";
	}
	
	cout << "\n\nTotal de comparaciones realizadas: " << comparaciones << endl;
	
	system("pause");
	
	return 0;
}

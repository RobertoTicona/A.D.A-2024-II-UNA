// Ordenamiento por selección, ejemplo youtube

#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {
	int lista[] = {10,0,1,3,7};
	
	int i, j, min, aux;
	
	//Imprimir lista DESORDENADA
	cout << "Lista desordenada\n";
	
	for(i = 0; i < 5; i++) {
		cout << lista[i] << "-";
	}
	
	//Algoritmo de orgenamiento por selección
	
	for(i = 0; i < 5; i++) {
		min = i;
		for(j=i+1;j<5;j++) {
			//condición para encontrar el mayor elemento
			if (lista[j] > lista[min]){
				min=j;
			}
		}
		aux = lista[i];
		lista[i] = lista[min];
		lista[min] = aux;
	}
	
	//Imprimir lista DESORDENADA
	cout << "\n\nLista ordenada\n";
	
	for(i = 0; i < 5; i++) {
		cout << lista[i] << "-";
	}
	cout << endl;
	system("pause");
	return 0;
}

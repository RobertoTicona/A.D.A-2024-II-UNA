// 5. Mergesort

#include <iostream>
#include <vector>
#include <stdlib.h>

using namespace std;


void merge(vector<double>& arreglo, int inicio, int mitad, int final) {
    int elementosIzq = mitad - inicio + 1;
    int elementosDer = final - mitad;

    vector<double> izquierda(elementosIzq);
    vector<double> derecha(elementosDer);

    
    for (int i = 0; i < elementosIzq; i++)
        izquierda[i] = arreglo[inicio + i];
    for (int j = 0; j < elementosDer; j++)
        derecha[j] = arreglo[mitad + 1 + j];

    
    int i = 0, j = 0, k = inicio;
    while (i < elementosIzq && j < elementosDer) {
        if (izquierda[i] <= derecha[j]) {
            arreglo[k] = izquierda[i];
            i++;
        } else {
            arreglo[k] = derecha[j];
            j++;
        }
        k++;
    }

    
    while (i < elementosIzq) {
        arreglo[k] = izquierda[i];
        i++;
        k++;
    }

    
    while (j < elementosDer) {
        arreglo[k] = derecha[j];
        j++;
        k++;
    }
}


void mergeSort(vector<double>& arreglo, int inicio, int final) {
    if (inicio < final) {
        int mitad = inicio + (final - inicio) / 2;

        
        mergeSort(arreglo, inicio, mitad);
        mergeSort(arreglo, mitad + 1, final);

        
        merge(arreglo, inicio, mitad, final);
    }
}


void imprimirArreglo(const vector<double>& arreglo) {
    for (size_t i = 0; i < arreglo.size(); i++) {
        cout << arreglo[i] << " ";
    }
    cout << endl;
}

int main() {
    
    vector<double> tiempos;
    tiempos.push_back(30.5);
    tiempos.push_back(22.3);
    tiempos.push_back(45.6);
    tiempos.push_back(15.2);
    tiempos.push_back(28.4);

    cout << "Tiempos de ejecucion desordenados: ";
    imprimirArreglo(tiempos);

    
    mergeSort(tiempos, 0, tiempos.size() - 1);

    cout << "Tiempos de ejecucion ordenados (ascendente): ";
    imprimirArreglo(tiempos);
    
    system("pause");

    return 0;
}



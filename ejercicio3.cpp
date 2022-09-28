// ConsoleApplication1.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <cstdlib>
#include<stdio.h>
#include <stdbool.h>
#include <conio.h>



int main() {

    std::cout << "----Ejercicio 3----\n";

    int nFila, nColumna;
    
    // INICIALIZAMOS LA MATRIZ
    std::cout << "Fila";
    std::cin >> nFila;
    std::cout << "Columna";
    std::cin >> nColumna;


    if (nFila == nColumna) {
        int** matriz = new int* [nFila]; // Reservamos memoria para las filas
        for (int i = 0; i < nFila; i++) {
            matriz[i] = new int[nColumna]; // Reservamos memoria para las columnas
        }
        // Agregamos numeros a la matriz
        std::cout << "\nInsertar elementos de la matriz";
        for (int i = 0; i < nFila; i++) {
            for (int j = 0; j < nColumna; j++) {
                std::cout << "Digito: ["<<i<<"]["<<j<<"]\n";
                std::cin >> *(*(matriz + i) + j); //matriz[i][j]
            }
        }
        std::cout << "\n";
        // Imprimimos la matriz
        for (int i = 0; i < nFila; i++) {
            for (int j = 0; j < nColumna; j++) {
                std::cout << *(*(matriz + i) + j);
                std::cout << "\n";
            }
        }


    }
    else {
        std::cout << "No es cuadrada por tanto no puede ser simetrica\n";
    }
    return 0;
      
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln

// ConsoleApplication1.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <cstdlib>
#include<stdio.h>
#include <stdbool.h>
#include <conio.h>



int main() {
    int matriz[3][3];
    int numero, simetria;

    // INGRESAR ELEMENTOS EN LA MATRIZ
    printf("Ingrese elementos de matriz:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            
            matriz[i][j] = numero;
        }
    }

    //para comprobar si es simetrica
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (matriz[i][j] != matriz[j][i])
                simetria = 0;
            simetria = 1;
        }
    }

    //imprimimos si es simetrica o no
    if (simetria == 1) {
        printf("La matriz es simetrica!\n");
        return 0;
    }
    printf("la matriz no es simetrica\n");
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

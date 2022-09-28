// ConsoleApplication1.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <cstdlib>
#include<stdio.h>
#include <stdbool.h>
#include <conio.h>



int main() {
    typedef int* IntPtr;
    int i, n;
    IntPtr p;
    std::cout << "¿Cuántos números deseas introducir?";
    std::cin >> i;
    p = new int[i];

    if (p == nullptr)
    {
        std::cout << "Error: no se puede reservar memoria suficiente";
    }
	else
	{
		for (n = 0; n < i; n++)
		{
			std::cout << "Introduce un número: ";
			std::cin >> p[n];
		}
		std::cout << "Has introducido: ";
		for (n = 0; n < i; n++)
		{
			std::cout << p[n] << ", ";
		}
		delete[]p;
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

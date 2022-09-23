// ConsoleApplication1.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>

void swap(int a, int b) {
    int temp = a;  // No funciona por que lo que esta creando son nuevas variables y no toca las predefinidas, para cambiar el valor para el main hay que hacer un return
    a = b;
    b = temp;
}

int main()
{
    int e2 = 2, e3 = 3;
    swap(e2, e3);
    std::cout << e2 << " " << e3 ; // Vemos que no funciona por que esta haciendo una copia
    std::cout << "Test\n";
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln

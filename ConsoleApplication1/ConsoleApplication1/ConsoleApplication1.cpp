// ConsoleApplication1.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>

int main()
{
    
    int asientos[15] = { 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 };
    int estado = 0;
    int LIBRE = 15;
    int VENDIDO = 0;
    int numAsiento;
    int asientoVendido;

    std:: cout << "Los estados de los asientos son: ";  std:: cout << " LIBRE = " << LIBRE; std:: cout << ", VENDIDO = " << VENDIDO;

    std:: cout << "" << std:: endl;

    for (int i = 1; i <= 15; i++)
    {
        std:: cout << "Asiento " << i << " = " << asientos[i] << std:: endl;
    }

    std:: cout << "Cual asiento quieres comprar? = "; std:: cin >> numAsiento;

    while (numAsiento != 0)
    {
        for (int i = 1; i <= 15; i++)
        {
            asientos[numAsiento] = 1;
        }

        /*if( numAsiento == asientos[numAsiento])
        {
                cout << "Vendido"<<endl;;
        }*/

        system("cls");
        system("pause");

        VENDIDO++;
        LIBRE--;

        std:: cout << "Los estados de los asientos son: ";  std:: cout << " LIBRE = " << LIBRE; std:: cout << ", VENDIDO = " << VENDIDO;

        std::cout << "Los estados de los asientos son: ";  std:: cout << " LIBRE = " << LIBRE; std:: cout << ", VENDIDO = " << VENDIDO;
        std:: cout << "" << std:: endl;

        for (int i = 1; i <= 15; i++)
        {
            std:: cout << "Asiento " << i << " = " << asientos[i] << std:: endl;
        }

        std:: cout << "Cual asiento quieres comprar? = "; std:: cin >> numAsiento;

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

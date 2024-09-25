#include <iostream>
#include <string.h>
#include <conio.h>
#include<stdlib.h>

using namespace std;

int main()
{
    // Paso 0 declaro cadenas y variable int para almacenar el valalor de caracteres de una cadena.
    char cadena1[15];
    char cadena2[15];
    char cadenaAuxiliar[20];
    int auxiliar1;
    int auxiliar2;

    // Paso 1 pido ingreso de datos.
    cout << "Ingresa una palabra" << endl;
    cin >> cadena1;

    cout << "Ingresa otra palabra" << endl;
    cin >> cadena2;

    // Paso 2 uso funciones de cadenas.
    auxiliar1 = strlen(cadena1);
    auxiliar2 = strlen(cadena2);

    // Paso 3 mostrar por pantalla.
    cout << "El tamano de la cadena 1 es de: " << auxiliar1 << endl;
    cout << "********************************" << endl;
    cout << "El tamano de la cadena 2 es de: " << auxiliar2 << endl;

    // Paso 4 comparar contenido de cadenas.
    if(strcmp(cadena1,cadena2)== 0)
    {
        cout << "********************************" << endl;
        cout << "Las cadenas son iguales " << endl;
    }
    else
    {
        cout << "********************************" << endl;
        cout << "Las cadenas son diferentes " << endl;
    }

    // Paso 5 concatenar cadenas.
    strcpy(cadenaAuxiliar,cadena1);
    strcat(cadenaAuxiliar," ");
    strcat(cadenaAuxiliar,cadena2);

    cout << "********************************" << endl;
    cout << "" << cadenaAuxiliar << endl;

    system ("color 9B" );
    system("pause");
    getch();
    return 0;
}

/* Ejercicio de Cadenas de Caracteres Propuesto
Elabore un programa en C++ que ingrese su nombre en una cadena de caracteres y su apellido en
otra cadena de caracteres y aplicando las diferentes de funciones con cadenas realizar:
1. concatenar las cadenas ingresadas en una cadena auxiliar y muestre el resultado de la
cadena auxiliar. (strcat)
2. Convertir a mayúscula el contenido de la cadena auxiliar y muestre el resultado de la cadena
auxiliar.
3. Convertir a minúscula el contenido de la cadena auxiliar y muestre el resultado de la cadena
auxiliar.
4. Copiar los 4 primeros caracteres de la cadena auxiliar y otro variable auxiliar y mostrar por
pantalla. (parecida a strcpy pero con otras condiciones)*/


#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main()
{

    // PUNTO 1.
    // Paso 0 declaro variables.
    char cadenaAuxiliar[20];
    char cadena1[10];
    char cadena2[10];
    char cadena3[10];

    // Paso 1 Pido el ingreso de datos.
    cout << "Ingrese su nombre" << endl;
    cin >>cadena1;
    cout << "Ingrese su apellido" << endl;
    cin >>cadena2;

    // Paso 3 uso de la función strcopy para copiar el ingreso de la primer cadena luego uso strcat para concatenar.
    strcpy(cadenaAuxiliar,cadena1);
    strcat(cadenaAuxiliar," "); // Dejar espacio.
    strcat(cadenaAuxiliar,cadena2);

    // Paso 4 mostrar por pantalla.
      cout << "Su nombre y apellido es "<< cadenaAuxiliar << endl;

    // PUNTO 2.
    strupr(cadenaAuxiliar);
      cout << "Mayuscula "<< cadenaAuxiliar << endl;

    // PUNTO 3.
    strlwr(cadenaAuxiliar);
      cout << "Mayuscula "<< cadenaAuxiliar << endl;

    // PUNTO 4.
    strncpy(cadena3,cadena1,4);
    cout << "4 primeros caracteres "<< cadena3 << endl;

    getch();
    return 0;
}

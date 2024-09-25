#include <iostream>
#include <string.h>
#include <stdlib.h>

using namespace std;

int main()
{
    // Paso 1 Variables.
    int numero,opcion,num1,num2,resultado1,resultadoFinal;
    int contadorNegativos = 0;
    int contadorPositivos = 0;
    char cadena[10];
    char cadena1[10];
    char cadena2[10];
    char cadenaAuxiliar[20];
    int largoDeCadena;

    cout << "******************************" << endl;
    cout << "Selecciona una opcion del Menu" << endl;
    cout << "******************************" << endl;

    // Paso 2 Desarrollar menu de opciones.
    cout << "1) Mostrar positivos y negativos" << endl;
    cout << "2) Calcular" << endl;
    cout << "3) Mostrar el largo de una palabra" << endl;
    cout << "4) Concatenar palabras" << endl;
    cin >>opcion;

    while(opcion <= 4 && opcion > 0)
    {
        // Declaración de sentecia.
        switch(opcion)
        {
            case 1:
                    for(int i = 0; i<10 ; i++)
                    {
                        cout << "Ingresa un numero" << endl;
                        cin>>numero;

                        if (numero<0)
                        {
                            contadorNegativos++;
                        }
                        else if (numero > 0)
                        {
                            contadorPositivos++;
                        }
                        else
                        {
                             cout << "El numero debe ser distinto de 0" << endl;
                             i--;
                             system("pause");
                        }
                    }

                    cout << "****************************************" << endl;
                    cout << "Cantidad de Positivos "<<contadorPositivos<< endl;
                    cout << "Cantidad de Negativos "<<contadorNegativos<< endl;
                    cout << "****************************************" << endl;

                break;

            case 2:
                    cout << "Ingresa un numero" << endl;
                    cin>>num1;
                    cout << "Ingresa otro numero" << endl;
                    cin>>num2;

                    resultado1 = num1 + num2;
                    resultadoFinal = resultado1 - 50;

                    cout << "**********************************************" << endl;
                    cout << "Numeros ingresados: " << num1 << endl;
                    cout << " "<< num2 << endl;
                    cout << "El resultado del calculo es: "<< resultadoFinal << endl;
                    cout << "**********************************************" << endl;

                break;

            case 3:
                    cout << "Ingresa una palabra" << endl;
                    cin>>cadena;
                    largoDeCadena = strlen(cadena);

                    cout << "*******************************************" << endl;
                    cout << "La palabra ingresada es: " << cadena << endl;
                    cout << "El largo de la cadena es: " << largoDeCadena << endl;
                    cout << "*******************************************" << endl;

                break;

              case 4:
                    cout << "Ingresa una palabra" << endl;
                    cin>>cadena1;
                    cout << "Ingresa una segunda palabra" << endl;
                    cin>>cadena2;

                    strcpy(cadenaAuxiliar , cadena1);
                    strcat(cadenaAuxiliar , " ");
                    strcat(cadenaAuxiliar, cadena2);

                    cout << "*********************************" << endl;
                    cout << "Usted ingreso: " << cadenaAuxiliar << endl;
                    cout << "*********************************" << endl;

                break;
            }

            system("pause");
            system("cls");

            cout << "******************************" << endl;
            cout << "Selecciona una opcion del Menu" << endl;
            cout << "******************************" << endl;

            // Paso 2 Desarrollar menu de opciones.
            cout << "1) Mostrar positivos y negativos" << endl;
            cout << "2) Calcular" << endl;
            cout << "3) Mostrar el largo de una palabra" << endl;
            cout << "4) Concatenar palabras" << endl;
            cin >>opcion;
     }

    return 0;
}

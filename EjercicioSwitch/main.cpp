#include <iostream>
#include <stdlib.h>
#include <math.h>


using namespace std;

int main()
{
    int resultado,numero,opcion;
    int respuesta = 0;

    cout << "**************************" << endl;
    cout << "SELECCIONE UNA OPCION" << endl;
    cout << "*************************" << endl;

    cout << "OPCION 1 PARA CALCULAR EL CUADRADO" << endl;
    cout << "OPCION 2 PARA CALCULAR EL CUBO" << endl;
    cout << "OPCION 3 PARA SUMAR 100" << endl;
    cout << "OPCION 4 PARA RESTAR 20" << endl;
    cout << "*************************" << endl;
    cin >> opcion;

    while(opcion != 0 && opcion <=5 )
    {

        cout << "*************************" << endl;
        cout << "INGRESE UN NUMERO" << endl;
        cout << "*************************" << endl;
        cin >> numero;

        switch(opcion)
        {
            case 1:
                    resultado = pow(numero,2);
                    cout << "El cuadrado del numero ingresado es : "<< resultado << endl;
                break;
            case 2:
                    resultado = pow(numero,3);
                    cout << "El cubo del numero ingresado es : "<< resultado << endl;
                break;
            case 3:
                    resultado = numero + 100;
                    cout << "El suma del numero ingresado es : "<< resultado << endl;
                break;
            case 4:
                    resultado = numero - 20;
                    cout << "El suma del numero ingresado es : "<< resultado << endl;
                break;
            default :
                 cout << "Ingreso una opcion incorrecta"<< endl;
                break;
        }

        system("pause");
        system("cls");


        cout << "*************************" << endl;
        cout << "SELECCIONE UNA OPCION" << endl;
        cout << "*************************" << endl;

        cout << "OPCION 1 PARA CALCULAR EL CUADRADO" << endl;
        cout << "OPCION 2 PARA CALCULAR EL CUBO" << endl;
        cout << "OPCION 3 PARA SUMAR 100" << endl;
        cout << "OPCION 4 PARA RESTAR 20" << endl;
        cout << "*************************" << endl;
        cin >> opcion;

        cout << "*************************" << endl;
        cout << "INGRESE UN NUMERO" << endl;
        cout << "*************************" << endl;
        cin >> numero;

    }

     return 0;
}


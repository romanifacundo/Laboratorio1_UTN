#include <iostream>
#include <stdlib.h>

using namespace std;

int opcion;

int calcularCuadrado( int n1)
{
int resultado = n1 n1;
return resultado;
}

int calcularCubo( int n1)
{
int resultado = n1 * n1 * n1;
return resultado;
}

int multiplicacion( int n1)
{
int resultado = n1 * 4;
return resultado;
}

void menu()
{
    cout<<"**"<<
    cout<<"SELECCIONE LA OPCION DEL MENU"<<cout<<"**"<
    cout<<"\n";
    cout<<"**"< cout<<"1) CALCULAR CUADRADO"< cout<<"2) CALCULAR CUBO"< cout<<"3) MULTIPLICAR"< cout<<"**"< cin >> opcion;
}

int main()
{

    int num,resul;

    menu();

    while(opcion < 4 && opcion > 0)
    {
            switch(opcion)
            {
            case 1:
            cout<<"\n";
            cout<<"INGRESE UN NUMERO"< cin>>num;

            resul = calcularCuadrado(num);
            cout<<"EL RESULTADO DEL CUADRADO ES: "<
            break;

            case 2:
            cout<<"\n";
            cout<<"INGRESE UN NUMERO"< cin>>num;

            resul = calcularCubo(num);
            cout<<"EL RESULTADO DEL CUBO ES: "<
            break;

            case 3:
            cout<<"\n";
            cout<<"INGRESE UN NUMERO"< cin>>num;

            resul = multiplicacion(num);
            cout<<"EL RESULTADO DEL LA MULTIPLICACION ES : "<
            break;

        }
        system("PAUSE");
        system("cls");

        menu();

            /*int num, resultado;

            cout<<"Ingrese un numero para calcular el cuadrado"< cin>>num;
            cout<<"\n";
            resultado = calcularCuadrado(num);

            cout<<"El cuadrado del numero ingresado es: "<< resultado << */

    return 0;
}

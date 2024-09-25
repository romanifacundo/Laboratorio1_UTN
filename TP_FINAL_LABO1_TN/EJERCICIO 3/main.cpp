#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int asientos[15] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    int LIBRE = 0;
    int VENDIDO = 1;
    int numAsiento;
    int CONTADORVENDIDOS = 0;
    int CONTADORLIBRES = 15;

    system("COLOR F0");
    system("COLOR F1");

    cout << "Los estados de los asientos son: ";  cout << " LIBRE = " << LIBRE; cout << ", VENDIDO = " << VENDIDO;

    cout << "" << endl;

    for(int i = 1;i <= 15;i++)
    {
        cout << "Asiento " << i << " = " <<asientos[i]<<endl;
    }

    cout << "Cual asiento quieres comprar? = "; cin>>numAsiento;

    while(numAsiento != 0)
    {
            if(asientos[numAsiento] == VENDIDO)
            {
                cout << "\n" << endl;
                cout << "**********************************" << endl;
                cout << "El asiento nro " << numAsiento << " ya esta Vendido!" << endl;
                cout << "**********************************" << endl;
                cout << "\n" << endl;
            }
            else if (numAsiento > 15)
            {
                cout << "\n" << endl;
                cout << "**********************************" << endl;
                cout << "Nro de Asiento incorrecto"<<endl;
                cout << "**********************************" << endl;
            }
            else
            {
                asientos[numAsiento] = 1;

                CONTADORVENDIDOS++;
                CONTADORLIBRES--;
            }

        system("pause");
        system("cls");

        cout << "Los estados de los asientos son: ";  cout << " LIBRE = " << LIBRE; cout << ", VENDIDO = " << VENDIDO;

        cout << "" << endl;

        for(int i = 1;i <= 15;i++)
        {
            cout << "Asiento " << i << " = " <<asientos[i]<<endl;
        }

        cout << "Cual asiento quieres comprar? = "; cin>>numAsiento;
    }

    system("pause");
    system("cls");

    cout << "\n" << endl;
    cout << "********************************************" << endl;
    cout << "Finalizacion de la Venta de Pasajes"<<endl;
    cout << "total de asientos: 15"<<endl;
    cout << "total de asientos vendidos: "<<CONTADORVENDIDOS<<endl;
    cout << "total de asientos libres: "<<CONTADORLIBRES<<endl;
    cout << "********************************************" << endl;
    cout << "\n" << endl;

    return 0;
}

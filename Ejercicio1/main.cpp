/*Diseñar un algoritmo de un programa que muestre 5 numeros enteros
positivos negativos y muestre el mayor el menor de los numeros leidos.*/

#include <iostream>

using namespace std;

int main()
{
    int numMin, numMax , num ;

    for (int i = 0;i < 5; i++)
    {
        cout << "Ingresa un numero" << endl;
        cin >>num;

        if (i == 0)
        {
            numMin = num;
            numMax = num;
        }
        else
        {
             if ( num < numMin)
             {
                numMin = num;
             }
             if (num > numMax)
             {
                 numMax = num;
             }
        }
    }

    cout << "Numero minimo es "<< numMin << endl;
    cout << "Numero maximo es "<< numMax << endl;

    return 0;
}




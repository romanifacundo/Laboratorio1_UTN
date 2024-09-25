#include <iostream>

using namespace std;

int main()
{
    int minimo;
    int maximo;
    int numero;

    for(int i = 0; i < 4 ;i++)
    {
        cout << "Ingresa un numero" << endl;
        cin >>numero;

        if(i == 0)
        {
            maximo = numero;
            minimo = numero;
        }
        else
        {
            if(numero > maximo)
            {
                maximo = numero;
            }
            if(numero < minimo)
            {
                minimo = numero;
            }
        }
    }

    cout << "Maximo "<< maximo << endl;
    cout << "Minimo "<< minimo << endl;

    return 0;
}

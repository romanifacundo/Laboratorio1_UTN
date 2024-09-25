#include <iostream>

using namespace std;

int main()
{
    // a)Declararlo b)Inicializarlo.
    int arreglo[5] = {16,2,77,40,12071};

    // c)Recorrer y mostrar los elementos.
    for (int i = 0; i < 5 ; i++)
    {
        cout<< arreglo[i] << endl;
    }

     cout<<"\n"<< endl;

    // d)Cambiar el nro 77 que se encuentra en la celda 3 por el nro 100.
    for (int i = 0; i < 5 ; i++)
    {
        arreglo[2] = 100;
        cout<< arreglo[i] << endl;
    }

    cout<<"\n"<< endl;

    // e)Mostrar en forma individual el nro de la celda 4.
    cout<< arreglo[4] << endl;


    return 0;
}

#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;

//VARIABLE GLOBAL.
int opcion;

void menu()
{   cout<<"*****************************************************"<<endl;
    cout<<"INGRESA UNA OPCION DEL MENU"<<endl;
    cout<<"*****************************************************"<<endl;
    cout<<endl;
    cout<<"*****************************************************"<<endl;
    cout<<"1) CALCULAR"<<endl;
    cout<<"2) COMPARAR DOS PALABRAS INGRESADAS"<<endl;
    cout<<"3) VECTOR"<<endl;
    cout<<"4) SALIR DEBE INGRESAR DOS NUMEROS QUE SU SUMA DE 5"<<endl;
    cout<<"*****************************************************"<<endl;

    cout<<endl;

    cin>>opcion;

    cout<<endl;
}

void funcionCuadruple()
{
    int num1;
    int resultadoCuadruple;

    cout<<"INGRESA UN NUMERO PARA CALCULAR SU CUADRUPLE"<<endl;

    cin>>num1;

    if(num1 == 0)
    {
        cout<<"INGRESA UN NUMERO QUE NO SEA 0"<<endl;

        cin>>num1;
    }

    resultadoCuadruple = num1 * num1 * num1 * num1;

    cout<<"RESULTADO DEL CUADRUPLE ES: "<< resultadoCuadruple<<endl;
}

void funcionCadena()
{
        char cad1[5];
        char cad2[5];
        int CadAuxiliar1;
        int CadAuxiliar2;

        cout<<"INGRESA UNA PALABRA"<<endl;

        cin>>cad1;

        cout<<"INGRESA OTRA PALABRA"<<endl;

        cin>>cad2;

        //CONTENIDO.
        if(strcmp(cad1,cad2) == 0)
        {
            cout<<endl;
            cout<<"CONTENIDOS IGUALES"<<endl;
        }
        else
        {
            cout<<endl;
            cout<<"CONTENIDOS NO IGUALES IGUALES"<<endl;
            cout<<endl;
        }


        //TAMAÑO.
         CadAuxiliar1 = strlen(cad1);
         CadAuxiliar2 = strlen(cad2);

        if(CadAuxiliar1 == CadAuxiliar2)
        {
            cout<<endl;
            cout<<"SON IGUALES EN TAMANO DE CARACTERES "<<CadAuxiliar1<<endl;
            cout<<"TAMANO CADENA 1 ES "<<CadAuxiliar1<<endl;
            cout<<"TAMANO CADENA 2 ES "<<CadAuxiliar2<<endl;
        }
        else
        {
            cout<<endl;
            cout<<"CADENAS CON DISTINTOS TAMANOS DE CARACTERES "<<endl;
        }

}


int main()
{
       //VARIABLES LOCALES.
        int arreglo1[10];
        int acumulador = 0;
        int numeroSalida1;
        int numeroSalida2;
        int resultadoSalida;

        menu();

        while(opcion != 0)
        {

            switch(opcion)
            {

                case 1:
                        //CALCULO.
                       funcionCuadruple();

                        system("PAUSE");
                        system("CLS");
                        menu();
                break;

                case 2:
                        //CADENA.
                       funcionCadena();

                        system("PAUSE");
                        system("CLS");
                        menu();
                break;

                case 3:
                        //ARRAYS.
                        for(int i = 0; i < 10; i++)
                        {
                            cin>>arreglo1[i];

                            acumulador += arreglo1[i];
                        }

                        cout<<endl;

                        for(int i = 0; i < 10; i++)
                        {
                           cout<<"LOS NUMEROS INGRESADOS FUERON: "<<arreglo1[i]<<endl;
                        }

                         cout<<"LA SUMA ACUMULADA ES: "<<acumulador<<endl;

                        system("PAUSE");
                        system("CLS");
                        menu();

                break;

                case 4:
                        //SALIDA.
                        cout<<endl;
                        cout<<"INGRESA EL PRIMER NUMERO PARA SALIR "<<endl;
                        cin>>numeroSalida1;
                        cout<<"INGRESA EL SEGUNDO NUMERO PARA SALIR "<<endl;
                        cin>>numeroSalida2;

                        resultadoSalida = numeroSalida1 + numeroSalida2;

                        if(resultadoSalida == 5)
                        {
                            return 0;
                        }

                break;

                default:

                    system("CLS");
                    //VALIDACION.
                    if(opcion>4)
                    {
                         cout<<"****INGRESO UNA OPCION NO CONTEMPLADA****"<<endl;
                         menu();
                    }


                break;

        }

    }

    return 0;
}


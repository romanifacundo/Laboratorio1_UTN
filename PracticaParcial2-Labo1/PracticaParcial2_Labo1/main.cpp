#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;

int opcion;

void menu()
{
        cout<<"INGRESA UNA OPCION DEL MENU"<<endl;
        cout<<"1) Manejo de cadena"<<endl;
        cout<<"2) Calcular"<<endl;
        cout<<"3) Hallar par/impar"<<endl;
        cout<<"4) Ingresar N para salir"<<endl;

        cin>>opcion;

}

void funCadena(char cadena[5] ,char caden[5])
{
        int largo = 0;
        char cadenaAuxiliar[25];

        cout<<"INGRESA UNA PALABRA"<<endl;
        cin>>cadena;
        cout<<"INGRESA OTRA PALABRA"<<endl;
        cin>>caden;

        strcpy(cadenaAuxiliar,cadena);
        strcat(cadenaAuxiliar,"");
        strcat(cadenaAuxiliar,caden);

        if(strcmp(cadena,caden)!= 0)
        {
            cout<<"Las cadenas son diferentes"<<endl;
        }
        else
        {
            cout<<"Las cadenas son iguales"<<endl;
        }

        largo = strlen(cadena);
        strupr(cadena);

        cout<<"Largo de palabra ingresada es: "<<largo<<endl;
        cout<<"Palabra pasada a mayusculas: "<<cadena<<endl;
        cout<<"Concatenacion: "<<cadenaAuxiliar<<endl;
}

void arrays()
{
    int vector1[5];
    int vector2[10];
    int vector3[]= {1,2,3,4,5,6,7,8,9,10};
    int mayor = 0;
    int menor;

          for(int i = 0; i < 5 ; i++)
                            {
                                cin>>vector1[i];

                                if(vector1[i] > mayor)
                                {
                                     mayor = vector1[i];
                                }
                            }

                            menor = mayor;

                            for(int i = 0; i < 5 ; i++)
                            {
                                if(menor > vector1[i])
                                {
                                    menor = vector1[i];
                                }
                            }


                            cout<<"MAYOR "<<mayor<<endl;
                            cout<<"MENOR "<<menor<<endl;


        for(int i = 9; i >= 0 ; i--)
        {

            cout<<vector3[i]<<endl;

        }
}

void calculo(int n1,int n2)
{
        int resultadoFinal;

        cout<<"INGRESA UN NUMERO"<<endl;
        cin>>n1;
        cout<<"INGRESA OTRO NUMERO"<<endl;
        cin>>n2;

        if((n1 && n2)!= 0)
        {
            int resultado = n1 * n2;
            int resultadoFinal = resultado * resultado * resultado;
            cout<<"EL RESULTADO "<< resultadoFinal <<endl;
        }
        else
        {
            cout<<"EL NUMERO DEBE SER DISTINTO DE 0"<<endl;
            cout<<"INGRESA UN NUMERO"<<endl;
            cin>>n1;
            cout<<"INGRESA OTRO NUMERO"<<endl;
            cin>>n2;

            int resultado = n1 * n2;
            int resultadoFinal = resultado * resultado * resultado;
            cout<<"EL RESULTADO "<< resultadoFinal <<endl;
        }

}


int main()
{

    char cadena1[5];
    char cadena2[5];
    int num1,num2;

    int contadorPares = 0;
    int contadorImpar = 0;



    menu();

        while(opcion != 0)
        {
            if (opcion == 'n' || opcion == 'N')
            {
                 break;
            }


            system("cls");

            switch(opcion)
            {
                    case 1:

                            funCadena(cadena1,cadena2);

                            system("pause");
                            system("cls");
                            menu();
                    break;

                    case 2:

                            calculo(num1,num2);

                            system("pause");
                            system("cls");
                            menu();
                    break;


                    case 3:

                            arrays();

                            system("pause");
                            system("cls");
                            menu();
                    break;

                    case 4:
                        cout << "Ingrese dos números que sumen 5 para confirmar la salida." << endl;
                        cout << "Primer número: ";
                        cin >> num1;
                        cout << "Segundo número: ";
                        cin >> num2;

                        if (num1 + num2 == 5)
                        {
                            cout << "Saliendo del programa..." << endl;

                            return 0;
                        }
                        else
                        {
                            cout << "Los números ingresados no suman 5. Continuando con el programa." << endl;
                        }

                    break;

                    default:

                        if(opcion> 4)
                        {
                            system("cls");

                            cout<<"******************"<<endl;
                            cout<<"Error por ingreso de una opcion no contemplada"<<endl;
                            cout<<"******************"<<endl;

                            cout<<endl;

                            menu();
                        }

                    break;
            }

        }


    return 0;
}

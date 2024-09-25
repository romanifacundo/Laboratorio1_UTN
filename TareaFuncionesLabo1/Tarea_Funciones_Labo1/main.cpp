#include <iostream>
#include <stdlib.h>

// BLOQUE PARA DEFINIR FUNCIONES.

float calcularArea( float x, float y)
{
    float area = (x * y) / 2;
    return area;
}

int suma(int x, int y)
{
    int resultado = x + y;
    return resultado;
}

int resta(int x, int y)
{
    int resultado = x - y;
    return resultado;
}

int division(int x, int y)
{
    float resultado = x / y;
    return resultado;
}

int multiplicacion(int x, int y)
{
    int resultado = x * y;
    return resultado;
}

using namespace std;

int main()
{
    int opcion, n1, n2, resultadoSuma ,resultadoResta, resultadoMultiplicacion, resultadoDivision;

    cout << "******************************" << endl;
    cout << "Selecciona una opcion del Menu" << endl;
    cout << "******************************" << endl;

    cout<< "\n";

    cout << "****************************************" << endl;
	cout << "1) SUMA" << endl;
	cout << "2) RESTA" << endl;
	cout << "3) MLTIPLICACION" << endl;
	cout << "4) DIVISION" << endl;
	cout << "0) SALIR DEL PROGRAMA" << endl;
	cout << "****************************************" << endl;
	cin>> opcion;

	while((opcion <= 4) && (opcion > 0) && (opcion != 0))
    {
        system("cls");

        switch(opcion)
        {
            case 1:

                    cout << "****************************************" << endl;
                    cout << "INGRESA EL PRIMER NUMERO "<< endl;
                    cin >> n1;
                    cout << "INGRESA EL SEGUNDO NUMERO "<< endl;
                    cin >> n2;
                    cout << "****************************************" << endl;
                    cout<< "\n";

                    // LLAMADO DE FUNCION.
                    resultadoSuma = suma(n1,n2);

                    cout << "****************************************" << endl;
                    cout << "RESULTADO DE LA SUMA ES "<<resultadoSuma<< endl;
                    cout << "****************************************" << endl;

                break;

            case 2:

                    cout << "****************************************" << endl;
                    cout << "INGRESA EL PRIMER NUMERO "<< endl;
                    cin >> n1;
                    cout << "INGRESA EL SEGUNDO NUMERO "<< endl;
                    cin >> n2;
                    cout << "****************************************" << endl;
                    cout<< "\n";

                    // LLAMADO DE FUNCION.
                    resultadoResta = resta(n1,n2);

                    cout << "****************************************" << endl;
                    cout << "RESULTADO DE LA RESTA ES "<<resultadoResta<< endl;
                    cout << "****************************************" << endl;

                break;

            case 3:

                    cout << "****************************************" << endl;
                    cout << "INGRESA EL PRIMER NUMERO "<< endl;
                    cin >> n1;
                    cout << "INGRESA EL SEGUNDO NUMERO "<< endl;
                    cin >> n2;
                    cout << "****************************************" << endl;
                    cout<< "\n";

                    // LLAMADO DE FUNCION.
                    resultadoMultiplicacion = multiplicacion(n1,n2);

                    cout << "****************************************" << endl;
                    cout << "RESULTADO DE LA MULTIPLICACION ES "<<resultadoMultiplicacion<< endl;
                    cout << "****************************************" << endl;

                break;

              case 4:

                    cout << "****************************************" << endl;
                    cout << "INGRESA EL PRIMER NUMERO "<< endl;
                    cin >> n1;
                    cout << "INGRESA EL SEGUNDO NUMERO "<< endl;
                    cin >> n2;
                    cout << "****************************************" << endl;

                    cout<< "\n";

                    if (n2 == 0 || n1 == 0)
                    {
                        cout <<"No se puede dividir entre 0"<< endl;
                        cout<< "\n";
                    }
                    else
                    {
                         // LLAMADO DE FUNCION.
                        resultadoDivision = division(n1,n2);

                        cout << "****************************************" << endl;
                        cout << "RESULTADO DE LA DIVISION ES "<<resultadoDivision<< endl;
                        cout << "****************************************" << endl;
                    }

                break;
            }

            system("pause");
            system("cls");

            cout << "******************************" << endl;
            cout << "Selecciona una opcion del Menu" << endl;
            cout << "******************************" << endl;

            cout<< "\n";

            cout << "****************************************" << endl;
            cout << "1) SUMA" << endl;
            cout << "2) RESTA" << endl;
            cout << "3) MLTIPLICACION" << endl;
            cout << "4) DIVISION" << endl;
            cout << "0) SALIR DEL PROGRAMA" << endl;
            cout << "****************************************" << endl;
            cin >> opcion;
     }

	/*float base , altura, areaDelTriangulo;



	cout << "Ingresa la base" << endl;
	cin >> base;

	cout << "Ingresa la altura" << endl;
	cin >> altura;

	areaDelTriangulo = calcularArea(base,altura); // Llamado a la función.

    cout <<"\n";

    cout << "****************************************" << endl;
	cout << "El area del triangulo es: " << areaDelTriangulo << endl;
	cout << "****************************************" << endl;*/

	return 0;
};

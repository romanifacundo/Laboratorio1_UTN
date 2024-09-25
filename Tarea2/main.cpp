
#include <iostream>

using namespace std;

int main()
{
	// PASO 0 DECLARACION DE VARIABLES.
	int numero1 , numero2;
	int resultado;

	// PASO 1 PEDIMOS EL INGRESO DEL NUMERO.
	cout << "Ingresa el primer numero que quieras sumar" << endl;
	cin >> numero1;
	cout << "Ingresa el segundo numero" << endl;
	cin >> numero2;

	// PASO 2 A LOS NUMEROS INGRESADO LOS SUMAMOS ALMACENANDO EL RESULTADO EN LA VARIABLE RESULTADO.
	resultado = numero1 + numero2;

	// PASO 3 MOSTRAMOS EN PANTALLA EL RESULTADO FINAL.
	cout << "El resultado final de la Suma es: " << resultado << endl;

	return 0;
};

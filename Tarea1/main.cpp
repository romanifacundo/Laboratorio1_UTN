
#include <iostream>

using namespace std;

int main()
{
	// PASO 0 DECLARACION DE VARIABLES.
	float numero1 , numero2, area;

	// PASO 1 PEDIMOS EL INGRESO DEL NUMERO.
	cout << "Vamos a calcular el area de un triangulo" << endl;
	cout << "Ingresa el primer numero" << endl;
	cin >> numero1;
	cout << "Ingresa el segundo numero" << endl;
	cin >> numero2;

	// PASO 2 CALCULO DE AREA.
	area = (numero1 * numero2) / 2;

	// PASO 3 MOSTRAMOS EN PANTALLA EL RESULTADO FINAL.
	cout << "El area del triangulo es: " << area << endl;

	return 0;
};


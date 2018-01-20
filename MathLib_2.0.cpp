#include <iostream>
#include <math.h>
#include <Windows.h>

using namespace std;

float suma(float a, float b)
{
	return a + b;
}

float rest(float a, float b)
{
	return a - b;
}

float mult(float a, float b)
{
	return a * b;
}

float div(float a, float b)
{
	return a / b;
}

float pow(int a, int b)
{
	return pow(a,b);
}

int mod(int a, int b)
{
	return a % b;
}

int main()
{
	int opt, alt1, alt2;
	float num1, num2;
	cout << "MathLib 2.0 (C++ Version)" << endl << endl;
	cout << "MENU DE OPERACIONES" << endl << endl;
	cout << "(1) Adicion" << endl;
	cout << "(2) Sustraccion" << endl;
	cout << "(3) Multiplicacion" << endl;
	cout << "(4) Division" << endl;
	cout << "(5) Potencia" << endl;
	cout << "(6) Modulo" << endl << endl;
	cout << "Ingrese el numero de la funcion que quiere realizar: ";
	cin >> opt;

	switch (opt)
	{
	
		case 1:
			cout << endl << "-----ADICION-----" << endl;
			cout << "Ingrese el primer numero: ";
			cin >> num1;
			cout << "Ingrese el segundo numero: ";
			cin >> num2;
			cout << "Su resultado de la suma es: " << suma(num1, num2) << endl << endl;
			break;

		case 2:
			cout << endl << "-----SUSTRACCION-----" << endl;
			cout << "Ingrese el primer numero: ";
			cin >> num1;
			cout << "Ingrese el segundo numero: ";
			cin >> num2;
			cout << "Su resultado de la resta es: " << rest(num1, num2) << endl << endl;
			break;

		case 3:
			cout << endl << "-----MULTIPLICACION-----" << endl;
			cout << "Ingrese el primer numero: ";
			cin >> num1;
			cout << "Ingrese el segundo numero: ";
			cin >> num2;
			cout << "Su resultado de la multiplicacion es: " << mult(num1, num2) << endl << endl;
			break;

		case 4:
			cout << endl << "-----DIVISION-----" << endl;
			cout << "Ingrese el primer numero: ";
			cin >> num1;
			cout << "Ingrese el segundo numero: ";
			cin >> num2;
			cout << "Su resultado de la division es: " << div(num1, num2) << endl << endl;
			break;

		case 5:
			cout << endl << "-----POTENCIA-----" << endl;
			cout << "Ingrese el primer numero: ";
			cin >> num1;
			cout << "Ingrese el segundo numero: ";
			cin >> num2;
			cout << "Su resultado de la potencia es: " << pow(num1, num2) << endl << endl;
			break;

		case 6:
			cout << endl << "-----MODULO-----" << endl;
			cout << "Ingrese el primer numero: ";
			cin >> alt1;
			cout << "Ingrese el segundo numero: ";
			cin >> alt2;
			cout << "Su resultado del modulo es: " << mod(alt1, alt2) << endl << endl;
			break;

		default:
			cout << endl << "ERROR: Esa opcion no esta disponible" << endl << endl;
	}

	system("Pause");

	return 0;
}
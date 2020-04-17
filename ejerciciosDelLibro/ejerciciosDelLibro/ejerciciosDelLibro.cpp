

#include <iostream>
using namespace std;

//ejercicio 2.16
/**
{
	int num1, num2, suma, resta, multiplicacion, division, modulo;

	cout << "inserte un numero 1: " << endl;
	cin >> num1;

	cout << "inserte un numero 2: " << endl;
	cin >> num2;

	cout << "el numero 1 es: " << num1 << endl;
	cout << "el numero 2 es: " << num2 << endl;

	suma = num1 + num2;
	resta = num1 - num2;
	multiplicacion = num1 * num2;
	division = num1 / num2;
	modulo = num1 % num2;

	cout << "la suma de los numeros son : " << suma << endl;
	cout << "la resta del numero1 y numero2 : " << resta << endl;
	cout << "la multiplicacion de numero1 y numero2 : " << multiplicacion << endl;
	cout << "la division de numero1 y numero2 es : " << division << endl;
	cout << "el redyo de numero1 y numero2 es : " << modulo << endl;

	return 0;
}
*/

//ejercicio 2.17
/*
int main()
{
	char a[] = "v x y z";
	char b = 'v';
	char c = 'x';
	char d = 'y';
	char e = 'z';

	//utilizando una insteruccion con un operador de insercion de flujos 
	cout << a<< endl;

	//utilizando una insteruccion con cuatro operadores de insercion de flujos 
	cout << b << "\t" << c << "\t" << d << "\t" << e << endl;

	//utilizando cuatro instrucciones
	cout << b;
	cout << c;
	cout << d;
	cout << e;


	return 0;
}
*/

//ejercicio 2.18
/*
int main()
{

	int num1, num2, num3, mayor, menor;

	cout << "Ingresar tres numeros :" << endl;

	cout << "Ingrese un numero: ";
	cin >> num1;
	cout << "Ingrese un numero: ";
	cin >> num2;
	cout << "Ingrese un numero: ";
	cin >> num3;

	if (num1 == num2 || num1 == num3 || num2 == num3) 
	{
		cout << "Hay numeros iguales, Ingresar numeros distintos";
	}
	else
	{
		if (num1 > num2 && num2 > num3)
		{
			mayor = num1;
			menor = num3;
		}
		if (num1 > num3 && num3 > num2)
		{
			mayor = num1;
			menor = num2;
		}
		if (num2 > num3 && num3 > num1)
		{
			mayor = num2;
			menor = num1;
		}
		if (num2 > num1 && num1 > num3)
		{
			mayor = num2;
			menor = num3;
		}
		if (num3 > num2 && num2 > num1)
		{
			mayor = num3;
			menor = num1;
		}
		if (num3 > num1 && num1 > num2)
		{
			mayor = num3;
			menor = num2;
		}
	}
	cout << mayor << " es el mas grande" << endl;
	cout << menor << " es el mas pequeno" << endl;

	return 0;
}
*/

//ejercicio 2.19
/*
int main()
{
	int num1, num2, num3, suma, promedio, producto,mayor,menor;

	cout << "inserte un numero 1: " << endl;
	cin >> num1;

	cout << "inserte un numero 2: " << endl;
	cin >> num2;

	cout << "inserte un numero 3: " << endl;
	cin >> num3;

	cout << "el numero 1 es: " << num1 << endl;
	cout << "el numero 2 es: " << num2 << endl;
	cout << "el numero 3 es: " << num3 << endl;

	suma = num1 + num2 + num3;
	promedio = (num1 + num2 + num3) / 3;
	producto = num1 * num2 * num3;

	if (num1 == num2 || num1 == num3 || num2 == num3)
	{
		cout << "Hay numeros iguales, Ingresar numeros distintos" << endl;
	}

	else {
		if (num1 > num2 && num2 > num3)
		{
			mayor = num1; 
			menor = num3; 
		}
		if (num1 > num3 && num3 > num2) 
		{
			mayor = num1; 
			menor = num2;
		}
		if (num2 > num3 && num3 > num1) 
		{ 
			mayor = num2;
			menor = num1; 
		}
		if (num2 > num1 && num1 > num3)
		{ 
			mayor = num2; 
			menor = num3;
		}
		if (num3 > num2 && num2 > num1) 
		{
			mayor = num3; 
			menor = num1; 
		}
		if (num3 > num1 && num1 > num2) 
		{
			mayor = num3; 
			menor = num2; 
		}
	}
	
	cout << "la suma de los numeros son : " << suma << endl;
	cout << "el promedio del numero1, numero2 y numero3 : " << promedio << endl;
	cout << "el producto de num2 y num3 : " << producto << endl;
	cout << "El mayor es: " << mayor << endl;
	cout << "El menor es: " << menor;
	return 0;
}
*/
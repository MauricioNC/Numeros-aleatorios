/* NÚMEROS ALEATORIOS

 Se utiliza la funcion rand para generar los numeros aleatoriamente.
 ésta debe ser almacenada en una variable auxiliar para que cada vuelta del ciclo guarde el valor generado.
 al utilizar esta variable, cada vez que se ejecute el programa generará los mismos números aleatorios, para poder corregir ese error
 se usa librería #iostream <ctime>, y la función srand(time(NULL)); para generar la "semilla" del número aleatorio, ésta va fuera del ciclo for.
*/

#include <iostream>
#include <cstdlib>
using namespace std;

int main ()
{
	int r; // variable auxiliar para almacenar los números aleatorios
	 
	for (int i = 1; i <= 20; i++) // For para hacer el conteo de los números
	{
		 r = rand(); // rand() almacena valores entre 0 y un número máximo, esos números se guardan en la variable auxiliar en cada vuelta del ciclo
		 cout << r << endl; // se imprimen el número aletorio en cada vuelta.
	}
	
	return 0;
}

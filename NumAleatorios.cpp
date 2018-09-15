/* N�MEROS ALEATORIOS

 Se utiliza la funcion rand para generar los numeros aleatoriamente.
 �sta debe ser almacenada en una variable auxiliar para que cada vuelta del ciclo guarde el valor generado.
 al utilizar esta variable, cada vez que se ejecute el programa generar� los mismos n�meros aleatorios, para poder corregir ese error
 se usa librer�a #iostream <ctime>, y la funci�n srand(time(NULL)); para generar la "semilla" del n�mero aleatorio, �sta va fuera del ciclo for.
*/

#include <iostream>
#include <cstdlib>
using namespace std;

int main ()
{
	int r; // variable auxiliar para almacenar los n�meros aleatorios
	 
	for (int i = 1; i <= 20; i++) // For para hacer el conteo de los n�meros
	{
		 r = rand(); // rand() almacena valores entre 0 y un n�mero m�ximo, esos n�meros se guardan en la variable auxiliar en cada vuelta del ciclo
		 cout << r << endl; // se imprimen el n�mero aletorio en cada vuelta.
	}
	
	return 0;
}

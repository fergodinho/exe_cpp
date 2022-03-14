/* WHILE PARA IMPRIMIR TORRE DE CARACTERES
Fernanda Godinho
PARTE5 - TRABALHO*/

#include <iostream>
using namespace std;

int main() {
	
 cout<<" \n\n 		CASE 05 ";
 cout<<" \n =====================================  ";
 cout<<" \n    Torre de Caracteres com 'WHILE'  ";
 cout<<" \n ===================================== ";

int linha=0, coluna=0;

 cout << " \n\n> Use esse programa para ver uma torre de caracteres\n\n";
 
 cout << endl;
 linha = 1;
	while (linha < 8)
	{
	coluna = 0;
		while (coluna < linha)
		{
		cout << "*";
		coluna = coluna + 1;
		}

	cout << endl;
	linha = linha + 1;
	} 
	
 cout << "\n\n\n";
}

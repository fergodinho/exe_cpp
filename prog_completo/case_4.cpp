/* DO-WHILE PARA IMPRIMIR TORRE DE CARACTERES
Fernanda Godinho
PARTE4 - TRABALHO*/


#include <iostream>
using namespace std;

int main() {

 cout<<" \n\n 		CASE 04 ";
 cout<<" \n =====================================  ";
 cout<<" \n   Torre de Caracteres com 'DO-WHILE'  ";
 cout<<" \n =====================================  ";

int linha=0, coluna=0; // variáveis

 cout << " \n\n> Use esse programa para ver uma torre de caracteres\n\n";
 
 cout << endl;
 linha = 1;
	do
	{
	coluna = 0;
		while (coluna < linha)
		{
		cout << "*";
		coluna = coluna + 1;
		}

	cout << endl;
	linha = linha + 1;
	} while (linha < 8);
	
 cout << "\n\n\n";
 
 }

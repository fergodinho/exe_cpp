/* Conjunto de triângulos usando 'FOR' e caractere escolhido
Fernanda Godinho
PARTE2 - TRABALHO */

#include <iostream>
using namespace std;

int main () {
 setlocale (LC_ALL, "Portuguese");

 
 cout<<" \n\n 		CASE 02 ";
 cout<<" \n =====================================  ";
 cout<<" \n\tCONJUNTO DE TRIÂNGULOS  ";
 cout<<" \n =====================================  ";

int x=0, y=0, tam=10; // variáveis
char res1, res2;      // variáveis

 cout << "\n\n> Use esse programa para imprimir um conjunto de dois triângulos com os caracteres escolhidos";
 cout << "\n\n> Escolha o primeiro caractere:  ";
 cin >> res1;
 cout << "> Escolha o segundo caractere:  ";
 cin >> res2;
 cout << "\n\n";
	
 for (x=0; x<tam; x++) {
	for (y=0; y<tam; y++){
		if (y>x)
		cout << " " << res1 << " " ;
		else
		cout << " " << res2<< " ";	
	}
 cout << "\n";
 }
	
 cout << "\n\n\n";	
}

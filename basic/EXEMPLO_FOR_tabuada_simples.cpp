/* Data: 05/08/2021
Autor: Fernanda Luiza Godinho
Descriçãpo: Programa tabuada
*/



#include<iostream>
#include <iomanip>
using namespace std;

main () 
{ 

setlocale(LC_ALL, "Portuguese");
int i=1, resposta;

cout<<" \n\n ** PROGRAMA DE TABUADA **\n\n Digite um número inteiro de 1 a 10:  ";
cin>> resposta;


	
cout << "\n  Tabuada do: " << resposta << " \n\n";

		for (i;i<=10;i++) {
		for (resposta;resposta<=10; resposta++){
			cout << "    -> " << resposta << " x " << i <<" = " << i*resposta << "\n\n";
						}	
}



}

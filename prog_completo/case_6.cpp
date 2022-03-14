/* Programa tabuada - 'FOR' DENTRO DE 'FOR'
Fernanda Godinho
PARTE6 - TRABALHO */

#include<iostream>
#include <iomanip>
using namespace std;
int res1=0, res2=0;

main () { 
 setlocale(LC_ALL, "Portuguese");
 
 cout<<" \n\n 		CASE 06 ";
 cout<<" \n =====================================  ";
 cout<<" \n              Tabuada";
 cout<<" \n =====================================  ";
 
int i=1, resposta; // variáveis

 cout << " \n\n> Use esse programa para ver as tabuadas desejadas";

 cout<<" \n\n> Digite o número que você gostaria de saber a tabuada:   ";
 cin>> res1;

 cout<<"\n\n> Até qual número você gostaria de ver a tabuada do "<< res1 << "?   ";
 cin>> res2;
	
 cout << "\n> Tabuada do: " << res1 << " até o número: "<< res2 << " \n";

	for (i;i<=res2;i++) {

		cout << "\n  " << res1 << " x " << i <<" = " << i*res1 ;

	}
 cout << "\n\n\n";
}

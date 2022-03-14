/* Data: 04/08/2021
Exemplo do uso do FOR

*/



#include<iostream>
#include <iomanip>
using namespace std;

main () 
{ 

setlocale(LC_ALL, "Portuguese");
int i;

cout << "\n\t\t CRONÔMETRO";
cout << "\n\n Digite um número positivo para contagem regressiva: " ;
cin >> i;
	
	if (i>0){
			for (i;i>=0;i--) {
			cout << "\n => Contagem = " << i << "\n\n";
						}
			}
	else {
		cout << "\n\a Entrada inválida\n\n";
		}






cout <<"\n \n ";
}

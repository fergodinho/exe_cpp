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

cout << "\n\t\t CRON�METRO";
cout << "\n\n Digite um n�mero positivo para contagem regressiva: " ;
cin >> i;
	
	if (i>0){
			for (i;i>=0;i--) {
			cout << "\n => Contagem = " << i << "\n\n";
						}
			}
	else {
		cout << "\n\a Entrada inv�lida\n\n";
		}






cout <<"\n \n ";
}

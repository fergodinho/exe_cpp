
/*
	Author: Fernanda Godinho
	Date: 04/08/21 14:21
	Description: 
*/

#include<iostream>
#include <iomanip>
#include <ctype.h> // para usar a fun��o toupper

using namespace std;
char vogal;

main () 
{
	
setlocale(LC_ALL, "Portuguese");
cout<< "\n\t * PROGRAMA PARA TESTAR VOGAIS * ";
cout<< "\n\n\ ==> Digite uma vogal sem acentua��o: ";
cin>> vogal;

vogal = toupper (vogal); // transforma asvogais em letra mai�scula

if ((vogal == 'A') || (vogal== 'E') || (vogal== 'I')  || (vogal== 'O')  || (vogal== 'U')) 
	cout<< " \n Vogal\n\n";
else cout<< " \n\a Inv�lido\n\n";
}

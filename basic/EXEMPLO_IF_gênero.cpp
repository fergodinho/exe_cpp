/*
	Author: Fernanda Godinho
	Date: 04/08/21 14:21
	Description: 
*/

#include<iostream>
#include <iomanip>
#include <ctype.h> // para usar a fun��o toupper

using namespace std;
char s;

main () 
{
	
setlocale(LC_ALL, "Portuguese");
cout<< "\n\t Programa para testar letra ";
cout<< "\n\n Digite uma letra para determinar o g�nero: ";
cout<< "\n [F] feminino	[M] masculino: ";
cin>> s;

s = toupper (s); // converte o caracter para mai�sculo
	
	if (s=='F'){
	cout<<"feminino";
	}
	
	else if (s=='M'){
	cout<<"masculino";
	}
	else {
		cout<<"ERRO";
	}




}

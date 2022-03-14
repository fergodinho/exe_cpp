/*
	Author: Fernanda Luiza Godinho
	Date: 02/08/21 16:29
	Description: 
*/

#include<iostream>	
#include<iomanip> // para usar casas decimais
using namespace std; 


main() 
{ // chave inicial

setlocale(LC_ALL, "Portuguese");
char estado_civil;


	cout<< "\n\n\t\t * INFORME SEU ESTADO CIVIL * ";
	
	cout<< "\n\n Selecione uma variável em formato 'char' para imprimir seu estado civil (S/C/V/D) ";
	cin >> estado_civil;
	


if ((estado_civil=='s') || (estado_civil=='S')) {
	cout<< "\n ===> Solteiro(a)\n";
}

else if ((estado_civil=='C') || (estado_civil == 'c')) {
	cout<< "\n ===> Casado(a)\n";	
}

else if ((estado_civil == 'v') || (estado_civil == 'V')) {
	cout<< "\n ===> Viúvo(a)\n";	
}

else if ((estado_civil == 'd') || (estado_civil == 'D') ){
	cout<< "\n ===> Divorciado(a)\n";
}

else { 
	cout<< "\n\t\a	ERRO! DIGITE UM CARACTER CONFORME SOLICITADO!\n\n\n";
}


}

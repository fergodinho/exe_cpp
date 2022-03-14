/*
	Author: Fernanda Luiza Goinho
	Date: 06/08/21 15:35
	Description: Mostre todas as tabuadas até o limite desejado
*/



#include<iostream>
#include <iomanip>
#include <ctype.h> 
using namespace std;

main () 
{

int x=1, y=1;

cout<< "\t\n * PROGRAMA TABUADA *";


	for (x=1;x<=10;x++) {
						cout<< "\n\n Tabuada do "<< x << "\n\n" ;
			    		for (y=1;y<=10;y++) { 						/* não esquecer de declarar uma variavel, principalmente quando esta dentro de 
																	OUTRO FOR, porque cada vez que ele retorna o valor da variável precisa zerar */
											
											cout << "\n  " << x << " x " << y << " = " << y*x ;
								}	
	}

cout<<"\n\n";

}

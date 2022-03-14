
/*
	Author: Fernanda Godinho
	Date: 04/08/21 14:21
	Description: 
*/

#include<iostream>
#include <iomanip>
#include <ctype.h> // para usar a função toupper

using namespace std;
char vogal;

main () 
{
	
setlocale(LC_ALL, "Portuguese");
cout<< "\n\t * PROGRAMA PARA TESTAR VOGAIS * ";


cout<< "\n\n\ Digite uma VOGAL sem acentuação: ";
cin>> vogal; // FALTA IMPRIMIR RESPOSTA!!!


vogal = toupper (vogal); // transforma asvogais em letra maiúscula

	while ((vogal=='A') || (vogal=='E') || (vogal=='I') || (vogal=='O') || (vogal=='U')) {
	  cout<< "\n\n\ Digite outra VOGAL sem acentuação: ";
	  cin>> vogal;
	  vogal = toupper (vogal); 

		switch (vogal) {
		     case 'A': {
				       cout<< " \n  ==> 1ª vogal do alfabeto\n\n";
					   break;
					   }
		  	 case 'E': {
					   cout<< " \n ==> 2ª vogal do alfabeto\n\n";
				 	   break;
				 	   }
			 case 'I': {
					   cout<< " \n ==> 3ª vogal do alfabeto\n\n";
					   break;
					   }
			 case 'O':{
					  cout<< " \n ==> 4ª vogal do alfabeto\n\n";
					  break;
		 			  }
			 case 'U':{
					  cout<< " \n ==> 5ª vogal do alfabeto\n\n";
					  break;
				  	  }
	
			 default: {
			 		  cout<< " \n\a Inválido\n\n";
				 	  break;
				      }
		}	
	}

cout<<"\n\n";
}

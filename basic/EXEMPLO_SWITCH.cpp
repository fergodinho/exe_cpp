
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


cout<< "\n\n\ Digite uma VOGAL sem acentua��o: ";
cin>> vogal; // FALTA IMPRIMIR RESPOSTA!!!


vogal = toupper (vogal); // transforma asvogais em letra mai�scula

	while ((vogal=='A') || (vogal=='E') || (vogal=='I') || (vogal=='O') || (vogal=='U')) {
	  cout<< "\n\n\ Digite outra VOGAL sem acentua��o: ";
	  cin>> vogal;
	  vogal = toupper (vogal); 

		switch (vogal) {
		     case 'A': {
				       cout<< " \n  ==> 1� vogal do alfabeto\n\n";
					   break;
					   }
		  	 case 'E': {
					   cout<< " \n ==> 2� vogal do alfabeto\n\n";
				 	   break;
				 	   }
			 case 'I': {
					   cout<< " \n ==> 3� vogal do alfabeto\n\n";
					   break;
					   }
			 case 'O':{
					  cout<< " \n ==> 4� vogal do alfabeto\n\n";
					  break;
		 			  }
			 case 'U':{
					  cout<< " \n ==> 5� vogal do alfabeto\n\n";
					  break;
				  	  }
	
			 default: {
			 		  cout<< " \n\a Inv�lido\n\n";
				 	  break;
				      }
		}	
	}

cout<<"\n\n";
}

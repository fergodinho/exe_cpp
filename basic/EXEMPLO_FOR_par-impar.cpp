/*
	Author: Fernanda Luiza Godinho
	Date: 06/08/21 14:58
	Description: Leitura de n�meros pares ou �mpares
*/



#include<iostream>
#include <iomanip>
#include <ctype.h> 
using namespace std;

main () 
{

char res1;
int i=0, res2;

setlocale(LC_ALL, "Portuguese");
	
cout<<"\n  * PROGRAMA PARA IDENTIFICAR N�MEROS PARES OU �MPARES AT� O LIMITE SELECIONADO PELO USU�RIO *";	
cout<<"\n\n Voc� gostaria de descobrir os n�meros pares ou �mpares? [P/I] \n ";
cin>> res1;
res1 = toupper (res1);
cout<<"\n\n Qual � o limite? ";
cin>> res2;


	switch (res1) {
		case 'P':{
					cout<<"\n\n Confira todos os n�meros pares at� o " << res2 <<"\n\n  ==>";
					for (i=0; i<res2;i++)
						if (i%2==0)
						cout <<"  "<<i;
					break;
				  }
		case 'I': {
					cout<<"\n Confira todos os n�meros �mpares at� o " << res2 <<"\n\n ==>";
					for (i=0; i<res2;i++)
						if (i%2!=0)
						cout <<"  "<<i;
					break;
				  }
		default: {
					cout<" Resposta inv�lida! ";
					break;
				 }
				
		
	}
cout<<"\n\n";	
}

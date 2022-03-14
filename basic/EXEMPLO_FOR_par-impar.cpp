/*
	Author: Fernanda Luiza Godinho
	Date: 06/08/21 14:58
	Description: Leitura de números pares ou ímpares
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
	
cout<<"\n  * PROGRAMA PARA IDENTIFICAR NÚMEROS PARES OU ÍMPARES ATÉ O LIMITE SELECIONADO PELO USUÁRIO *";	
cout<<"\n\n Você gostaria de descobrir os números pares ou ímpares? [P/I] \n ";
cin>> res1;
res1 = toupper (res1);
cout<<"\n\n Qual é o limite? ";
cin>> res2;


	switch (res1) {
		case 'P':{
					cout<<"\n\n Confira todos os números pares até o " << res2 <<"\n\n  ==>";
					for (i=0; i<res2;i++)
						if (i%2==0)
						cout <<"  "<<i;
					break;
				  }
		case 'I': {
					cout<<"\n Confira todos os números ímpares até o " << res2 <<"\n\n ==>";
					for (i=0; i<res2;i++)
						if (i%2!=0)
						cout <<"  "<<i;
					break;
				  }
		default: {
					cout<" Resposta inválida! ";
					break;
				 }
				
		
	}
cout<<"\n\n";	
}

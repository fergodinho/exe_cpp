/* PROGRAMA CONTADOR
Fernanda Godinho
PARTE1 - TRABALHO
Exemplo Uso do comando: While */


#include <iostream>
#include <Windows.h> // para usar fun��o sleep()
using namespace std;


int main() {
 setlocale(LC_ALL, "Portuguese"); 

 cout<<" \n\n 		CASE 01 ";
  cout<<" \n =====================================  ";
 cout<<" \n\t TIC-TAC - Contador  ";
 cout<<" \n =====================================  ";
 
int contador, i; // vari�veis 
 
 cout << " \n\n> Use esse programa para fazer uma contagem regressiva em segundos";
  cout<<"\n\n\> Com qual n�mero que voc� deseja iniciar a contagem?  ";
 cin>> contador;
 
 cout << "\n\n ATEN��O! \n Seu tempo est� acabando:\n";
 
 i=1;
 while (contador>=0){
    		  cout<<"\n  "<< contador << "!";
			  contador=contador-1;
			  Sleep(800);
			  i++; //contador
 			   }
 			 
 cout << "\n\n\a SEU TEMPO ACABOU!";
 cout << "\n\n\n";
}

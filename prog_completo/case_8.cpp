/* programa vetor referente a maior e menor temperatura
Fernanda Godinho
PARTE8 - TRABALHO */

#include<iostream>
using namespace std;
 
int main() {
 setlocale(LC_ALL, "Portuguese");
  
 cout<<" \n\n 		CASE 08 ";
 cout<<" \n =====================================  ";
 cout<<" \n        Vetores de Temperatura";
 cout<<" \n =====================================  ";
 
int const TAM = 6; // vari�veis
int i,maior, menor;
float temperatura[TAM],media=0, acum_alturas=0;

 cout<<"\n\n> Use o programa para obter a MAIOR e MENOR temperatura em �C";

 for(i=0;i<TAM;i++) {
		cout<<"\n\n> Informe a " <<i+1<<"� temperatura:   ";
		cin>>temperatura[i];
			if (i==0)// Funciona somente uma vez e serve para inicializar as vari�veis: MAIOR e MENOR
			{
			menor = temperatura[i];
			maior = temperatura[i];
			}
			if (temperatura[i] > maior)
			{ maior = temperatura[i];
			}
			if (temperatura[i] < menor)
			{ menor = temperatura[i];
			}
 }// Termina o FOR
	
 cout<<"\n> A menor temperatura informada foi:   "<<menor<<"�C";
 cout<<"\n> A maior temperatura informada foi:   "<<maior<<"�C";

 cout<<"\n\n\n";
}

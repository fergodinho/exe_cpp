/* Programa SURPRESINHA - JOGO DE ADIVINHAR PALAVRAS
Fernanda Godinho
PARTE9 - TRABALHO */


#include <iostream>
#include <conio.h>
#include <stdlib.h> // para usar o comando system
using namespace std;

int main () {
 setlocale(LC_ALL, "Portuguese");	
 
 cout<<" \n\n        	CASE 09";
 cout<<" \n =====================================  ";
 cout<<" \n           >  SURPRESINHA  <";
 cout<<" \n =====================================  ";

int i=0,  chances=8, acertos=0; // variáveis
int const tam=11;
char secreta[tam], letra[1], res_final;
bool acerto=false; // end variáveis

 cout << "\n\n> JOGO PARA ADIVINHAR A PALAVRA SECRETA";
 
 cout << "\n\n INSTRUÇÕES DO JOGO:"; // instruções
 cout <<"\n 1. A palavra secreta foi escolhida previamente pela programadora";
 cout <<"\n 2. Você deverá digitar as letras individualmente para o programa verificar o acerto ou erro";
 cout << "\n 3. Você possui 8 chances";
 cout <<"\n 4. A cada tentativa errada você perde uma chance";// end instruções
 
 cout <<" \n\n\t    > VAMOS JOGAR! <\n\n\n";
 system("pause");
 system("cls");
	
	char palavra[]="SURPRESINHA";
	
		for (i;i<11;i++){
		secreta[i]='_';
		} // termina o FOR
inicio:		
		while ((chances>0)&&(acertos<tam)) {
			cout << "\n\n> JOGO PARA ADIVINHAR A PALAVRA SECRETA";
			cout << "\n\n   Chances restantes:   " << chances;									
			cout << "\n   Acertos:   " << acertos;										
			cout << "\n\n\n> A palavra secreta é:   ";

			for (i=0;i<tam; i++) {
					cout << " " << secreta[i] << " ";
			}

			cout <<"\n\n> Digite uma letra:   ";
			cin >> letra [0];
			letra [0] = toupper (letra [0]);
			
			for (i=0;i<tam;i++){
				if (palavra[i]==letra[0]){
					acerto=true;
					secreta[i]=palavra[i];
					acertos++;
				}

			}

			if(!acerto){
			chances--;
			}

		acerto=false;
		system("cls");
		} // termina o WHILE
	
	if (acertos==tam){
		cout << "\n\n\n>  PARABÉNS, VOCÊ VENCEU!  A PALAVRA SECRETA ERA 'SURPRESINHA'  <\n\n\n";
	}
	else {
		cout << "\n\n\n>  QUE PENA, VOCÊ PERDEU!  <";
		cout << "\n\n Aperte 'S' para jogar novamente ou qualquer tecla para sair   ";
		cin >> res_final;
		
		if (res_final=='S') {
			 goto inicio;
			}
	}


cout << "\n\n\n";
} //fim

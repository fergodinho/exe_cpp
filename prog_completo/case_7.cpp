/* DO-WHILE PARA VETORES DE PESO
Fernanda Godinho
PARTE7 - TRABALHO*/

#include <iostream>
#include <iomanip>
using namespace std;

int main () {
 setlocale(LC_ALL, "Portuguese");
 
 cout<<" \n\n 		CASE 07 ";
 cout<<" \n =====================================  ";
 cout<<" \n           Vetores de Peso";
 cout<<" \n =====================================  ";

int i=0, op=0, maior, menor; //variáveis
int const TAM=2;
float peso[TAM], peso_total=0;

 cout << " \n\n> Use esse programa para obter diferentes informações acerca dos vetores informados";

	for (i;i<=TAM; i++){
		cout << "\n\n> Digite o " << i+1 << "º peso em Kg:   ";
		cin >> peso [i];
		peso_total = peso_total + peso [i];
		if (i==0)// Funciona somente uma vez e serve para inicializar as variáveis: MAIOR e MENOR
			{
			menor = peso[i];
			maior = peso[i];
			}
			if (peso[i] > maior)
			{ maior = peso[i];
			}
			if (peso[i] < menor)
			{ menor = peso[i];
			}

	} // TEMINA O FOR
	
 cout << "\n\n> Selecione no menu abaixo o que você gostaria de saber:";
 cout << "\n\n MENU\n";
 cout << "\n [1] - Saber a média dos pesos";
 cout << "\n [2] - Saber o maior peso digitado";
 cout << "\n [3] - Saber o menor peso digitado";
 cout << "\n [4] - SAIR";
 cout << " \n\n\n> Digite aqui o número correspondente à sua opção:   ";
 cin >> op;
 
 do {
	switch (op){
		case 1: {
			cout << "\n> Média dos pesos digitados:   " << peso_total/(TAM+1) <<"Kg";
			
			break;
		}
		case 2: {
			cout<< "\n> Maior peso digitado:   " << maior <<"Kg";
			
			break;
		}
		case 3: {
			cout<< "\n> Menor peso digitado:   " << menor <<"Kg";			
			
			break;
		}
      case 4:{
              cout<<"\n\n Aperte qualquer tecla para finalizar o programa.\n ";
              getch();
              break;
       }			
		default: {
			cout <<" \n> Opção inválida!";
			break;
		}
	}
 } while (op!=4);
 
 cout << "\n\n\n";	
}

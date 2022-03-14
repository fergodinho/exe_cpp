/* Exemplo USO DO FOR
Programa Idade das Pessoas
*/

#include <iostream> 
#include <iomanip> 
using namespace std; 
int i=1, qtd_pessoas=0;
float idade=0, menor_18=0, maior_65=0, acumula=0, media=0;

main()
{
 setlocale(LC_ALL, "Portuguese"); 
 cout<<" \n\t  PROGRAMA MÉDIA DAS IDADES   ";
 cout<<" \n\n Informe a quantidade de participantes:  "; 
 cin>> qtd_pessoas;
 for(i=1;i<=qtd_pessoas;i++)
 {
  cout<<"\n Informe a Idade da " <<i<<"ª pessoa: ";
  cin>>idade;
  acumula= acumula + idade;
  	
  	if (idade<18){
  		menor_18++;
		}
	if (idade>65){
		maior_65++;
		}
		
 }
  media= acumula/qtd_pessoas;
  cout<< "\n ==> A média das idades é "<<media;
  cout<< "\n\n Quantidade de pessoas menores de 18 anos: " << menor_18;
  cout<< "\n\n Quantidade de pessoas maiores de 65 anos: " << maior_65;
  
  cout<<"\n\n\n";
}
 
	
	


/* Exemplo USO DO FOR
Contando os números ÍMPARES de Zero até 100
BY  Cláudia Werlich 2020_01
*/
#include <iostream>
#include <iomanip>
using namespace std;
int i, idade=0, v_acumulado; // cont é um contador
float media;
main()
{
 setlocale(LC_ALL, "Portuguese");
 cout<<" \n=========================================  ";
 cout<<" \n\t  PROGRAMA IDADE DE 3 PESSOAS  ";
 cout<<" \n=========================================  \n";


	for (i=1; i<=3; i++) {
 	   		cout <<"\n\n Digite a idade da  "<<i<<"ª Pessoa:  ";
   			cin >> idade;
   			v_acumulado= v_acumulado+idade;
  				do {
				  
                	cout << "\n\n ATENÇÃO IDADE ERRADA";
               		cout << "\n\n Digite a idade novamente da "<<i<<"ª Pessoa:  ";
                	cin >> idade;}
                	
				while ((idade<0) || (idade>145));
				

    }  
			  
media=v_acumulado/i;

 cout<<"\n\n\n";
}

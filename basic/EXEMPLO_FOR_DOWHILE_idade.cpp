/* Exemplo USO DO FOR
Contando os n�meros �MPARES de Zero at� 100
BY  Cl�udia Werlich 2020_01
*/
#include <iostream>
#include <iomanip>
using namespace std;
int i, idade=0, v_acumulado; // cont � um contador
float media;
main()
{
 setlocale(LC_ALL, "Portuguese");
 cout<<" \n=========================================  ";
 cout<<" \n\t  PROGRAMA IDADE DE 3 PESSOAS  ";
 cout<<" \n=========================================  \n";


	for (i=1; i<=3; i++) {
 	   		cout <<"\n\n Digite a idade da  "<<i<<"� Pessoa:  ";
   			cin >> idade;
   			v_acumulado= v_acumulado+idade;
  				do {
				  
                	cout << "\n\n ATEN��O IDADE ERRADA";
               		cout << "\n\n Digite a idade novamente da "<<i<<"� Pessoa:  ";
                	cin >> idade;}
                	
				while ((idade<0) || (idade>145));
				

    }  
			  
media=v_acumulado/i;

 cout<<"\n\n\n";
}

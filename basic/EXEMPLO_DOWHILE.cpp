/* Exemplo USO DO FOR
Contando os n�meros �MPARES de Zero at� 100
BY  Cl�udia Werlich 2020_01
*/
#include <iostream>
#include <iomanip>
using namespace std;
int i, idade, v_acumulado;

main()
{
 setlocale(LC_ALL, "Portuguese");

 cout<<" \n\t  PROGRAMA IDADE DE 3 PESSOAS  ";



for (i=1; i<=3; i++)
 {
    do{
         cout <<"\n\n Digite a idade da  "<<i<<"� Pessoa:  ";
         cin >> idade;
   		 if ((idade<0)||(idade>145))
            {     cout << "\n\n ATEN��O, IDADE ERRADA";
                   cout << "\n\n Digite a idade novamente da "<<i<<"� Pessoa:  ";
                   cin >> idade;
             }
            } while ((idade>0) || (idade<145));
           v_acumulado=v_acumulado + idade; 
          }
      
 cout<< "\n A m�dia das idades �: " << v_acumulado/i;
 cout<<"\n\n\n";
}

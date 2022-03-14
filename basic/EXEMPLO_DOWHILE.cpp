/* Exemplo USO DO FOR
Contando os números ÍMPARES de Zero até 100
BY  Cláudia Werlich 2020_01
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
         cout <<"\n\n Digite a idade da  "<<i<<"ª Pessoa:  ";
         cin >> idade;
   		 if ((idade<0)||(idade>145))
            {     cout << "\n\n ATENÇÃO, IDADE ERRADA";
                   cout << "\n\n Digite a idade novamente da "<<i<<"ª Pessoa:  ";
                   cin >> idade;
             }
            } while ((idade>0) || (idade<145));
           v_acumulado=v_acumulado + idade; 
          }
      
 cout<< "\n A média das idades é: " << v_acumulado/i;
 cout<<"\n\n\n";
}

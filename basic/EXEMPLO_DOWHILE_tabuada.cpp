/* Exemplo USO DO-WHILE
Calculando a Tabuada de um Número
BY  Cláudia Werlich 
*/
#include <iostream> 
#include <iomanip> 
using namespace std; 
int i, num; 

 

main()
{
 setlocale(LC_ALL, "Portuguese"); 
 cout<<" \n=========================================  "; 
 cout<<" \n\t  PROGRAMA TABUADA COM O DO-WHILE  ";
 cout<<" \n=========================================  \n"; 
 cout<<"\n\n Digite um número para a Tabuada: ";
 cin>>num;
 i=0;
 do {
      cout<<"\n "<<num<<"  * "<<i<<" = "<<num * i;
      i++;
    } while (i<=10);
 cout<<"\n\n\n";
}
 

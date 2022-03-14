/*Data: 06/08/2021
Programa: Imprimindo um quadrado na tela 
*/
#include<iostream>
#include <iomanip>
 
using namespace std;
//declarando variáveis
int i, j; 

 

main () 
{ 
 cout<<"\n Programa Caracteres  " ;
 system("color 9");
 cout<<"\n\n\n";
 cout<<"\t\t";
 for (i=1; i<=10;i++)
 {
   for (j=1; j<=20;j++){
         cout<<"\xDB";
   }
   cout<<"\n";
   cout<<"\t\t";
  }
 cout<<"\n\n\n\n";
}

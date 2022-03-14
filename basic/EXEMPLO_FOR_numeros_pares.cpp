/* Data: 04/08/2021
Exemplo do uso do FOR - Mostrando os números pares



*/



#include<iostream>
#include <iomanip>



using namespace std;
//declarando variáveis
int i;



main () //função principal
{ // chave inicial
setlocale(LC_ALL, "Portuguese");
cout<< "\n\n LISTA DE NÚMEROS PARES\n\n";
for (i=0; i<100;i++)
{
if (i%2==0)
cout <<" "<<i;
}
cout <<"\n \n ";
}

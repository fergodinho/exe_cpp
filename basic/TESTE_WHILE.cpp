/* Exemplo Uso do comando: While */


#include <iostream>
#include <iomanip>
using namespace std;
int num, limite, i;


main()
{
 setlocale(LC_ALL, "Portuguese");
 cout<<" \n\n =====================================  ";
 cout<<" \n\t PROGRAMA TABUADA  ";
 cout<<" \n =====================================  \n";
 
 cout<<"\n\n Informe o número que você deseja saber a tabuada:  ";
 cin>> num;
 cout<<"\n\n Informe até qual número você deseja saber o resultado:  ";
 cin>> limite;
 
 i=1;
 	while (i<=limite){
    			cout<<"\n\t"<<num<<" x " << i<<" = " << num*i;
				i++; //contador
 				}
cout<< "\n\n";
}

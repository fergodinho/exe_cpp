/* Exemplo Uso do comando: While */


#include <iostream>
#include <iomanip>
#include <ctype.h>
using namespace std;
int num, limite, i;
char res;

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
 cout<<"\n\n Informe se você deseja que o programa seja executado com o comando FOR ou WHILE [F/W]:  ";
 cin>> res;
 res = toupper (res);
 
 	if (res=='W'){
		i=1;
 		while (i<=limite)  	    {
    						    cout << "\n -> Tabuada do: " << num << " com WHILE \n\n";
							    cout<<"\n\t"<<num<<" x " << i<<" = " << num*i;
							    i++; //contador
 		}
 	}
 	
 	else
 	if (res=='F'){
 	 	cout << "\n -> Tabuada do: " << num << " com FOR \n\n";
		for (i=1;i<=limite;i++) {
							    cout << "\n\t" << num << " x " << i <<" = " << i*num ;
		 }
 	}

cout<< "\n\n";
}

/* 11/08/2021
Fernanda Luiza Godinho
*/


#include <iostream> 
#include <iomanip> 

using namespace std; 

main()
{
int num, cont;
int acumulador=0;
int cont_neg=0, cont_par=0;
char op, op1;

setlocale(LC_ALL, "Portuguese");	
cout <<"\n\n\t ** PROGRAMA DE REPETI��O DE N�MEROS INTEIROS ** \n\n";
	
	cont=0;
	do {
	cont++;
	cout << "\n\n ==> Digite o " << cont << "� n�mero inteiro: ";
	cin >> num;
	
	acumulador=num+acumulador;	
	
		if (num<0){
		cont_neg++;
		}

	
		if (num%2==0){
		cont_par++;	
		}
		
	
	cout<<"\n\n Deseja digitar outro n�mero? [S] [N]\n\n  ";
	cin >> op1;
	op1 = toupper (op1);

	system ("cls");
	
	} while (op1=='S');
	
cout<<"\n\n\t * RESULTADO DO PROGRAMA *";
cout<<"\n\n Quantidade total de n�meros digitados: " << cont;
cout<<"\n\n Quantidade de n�meros negativos: " << cont_neg;
cout<<"\n\n Quantidade de n�meros pares: " << cont_par;
cout << "\n\n Soma dos n�meros digitados: " << acumulador;

cout<<"\n\n\n";
}

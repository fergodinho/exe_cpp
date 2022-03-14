/* Programa que verifica dia da semana do nascimento
Fernanda Godinho
PARTE3 - TRABALHO */

#include <iostream>
using namespace std;

int main (){
 setlocale(LC_ALL, "Portuguese");

 cout<<" \n\n 		CASE 03 ";
 cout<<" \n =====================================  ";
 cout<<" \n\tQue dia, que dia...  ";
 cout<<" \n =====================================  ";
 
int dia_atual, mes_atual, ano_atual,dia_res, mes_res, ano_res, mes_total, ano_total; // variáveis
 
 cout << " \n\n> Use esse programa para saber informações sobre o dia do seu nascimento";
 
 cout << "\n\n> Insira o dia do seu nascimento:  ";
 cin >> dia_res;
 cout << "\n\n> Insira o mês do seu nascimento:  ";
 cin >> mes_res;
 cout << "\n\n> Insira o ano do seu nascimento:  ";	
 cin >>ano_res;

 cout << "\n\n> Insira o dia da data de hoje:   ";
 cin >> dia_atual;
 cout << "\n\n> Insira o mês da data hoje:   ";	
 cin >> mes_atual;
 cout << "\n\n> Insira o ano da data de hoje:   ";	
 cin >> ano_atual;
	
	int f = ano_res + dia_res +3 * (mes_res-1) -1;  // conta para calcular dia da semana livro Victoriane Viviane
	
	if(mes_res <3) ano_res--;
	
	else f-= int (0.4*mes_res+2.3);
	
	f+= int(ano_res/4)- int ((ano_res/100+1)*0.75) ;
	
	f%=7;                                           // fim da conta
	
	ano_total=ano_atual-ano_res;                   // conta anos totais
	mes_total=ano_total*12-(mes_res-mes_atual);   // conta meses totais
	
		
 cout << " \n\n Você nasceu em um(a): ";
 	if (f==0) {
	cout << " Domingo";
	}
	else
	if (f==1) {
		cout << " Segunda-feira";	
	}
	else
	if (f==2) {
		cout << " Terça-feira";	
	}
	else
	if (f==3) {
		cout << " Quarta-feira";	
	}
	else
	if (f==4) {
		cout << " Quinta-feira";	
	}
	if (f==5) {
		cout << " Sexta-feira";	
	}
	else
	if (f==6) {
		cout << " Sábado";	
	}
	
	
 cout << " há " << ano_total << " anos... Ou há " << mes_total << " meses.";
	
 cout << "\n\n\n";
}


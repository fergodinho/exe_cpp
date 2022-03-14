/* Exemplo USO DO FOR
PROGRAMA TEMPERATURA
*/

#include <iostream> 
#include <iomanip> 
using namespace std; 
int i=1, qtd_dias=0, cont=0;
float temperatura=0, temperatura_frio=0, temperatura_calor=0, temperatura_total=0, temperatura_mediana=0, media=0;

main()
{
	
 setlocale(LC_ALL, "Portuguese"); 
 
 cout<<" \n\t  PROGRAMA MÉDIA DE TEMPERATURA   ";
 cout<<" \n\n Informe a quantidade de dias:  "; 
 cin>> qtd_dias;
 
 	for(i=1;i<=qtd_dias;i++) {
  cout<<"\n\t Informe a temperatura do " <<i<<"º dia: ";
  cin>>temperatura;
  temperatura_total= temperatura_total + temperatura;
  	
  		if (temperatura<0){
  		temperatura_frio++;
		}
		if (temperatura>35){
		temperatura_calor++;
		}
		if ((temperatura>30) && (temperatura<45)){
		cont++;
		temperatura_mediana=temperatura_mediana+temperatura;
		}
 	}	
	 	
  media= temperatura_total/qtd_dias;
  
  cout<< "\n ==> A média das temperaturas dos " << qtd_dias << " dias foi de "<<media<<"ºC";
  cout<< "\n\n Quantidade de dias com temperaturas negativas: " << temperatura_frio;
  cout<< "\n\n Quantidade de dias com temeratura acima dos 35ºC: " << temperatura_calor;
  cout<< "\n\n Média das temperaturas entre 30ºC e 45ºC:  " << temperatura_mediana/cont <<"ºC";
  
  cout<<"\n\n\n";
}
 
	
	


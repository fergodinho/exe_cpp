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
 
 cout<<" \n\t  PROGRAMA M�DIA DE TEMPERATURA   ";
 cout<<" \n\n Informe a quantidade de dias:  "; 
 cin>> qtd_dias;
 
 	for(i=1;i<=qtd_dias;i++) {
  cout<<"\n\t Informe a temperatura do " <<i<<"� dia: ";
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
  
  cout<< "\n ==> A m�dia das temperaturas dos " << qtd_dias << " dias foi de "<<media<<"�C";
  cout<< "\n\n Quantidade de dias com temperaturas negativas: " << temperatura_frio;
  cout<< "\n\n Quantidade de dias com temeratura acima dos 35�C: " << temperatura_calor;
  cout<< "\n\n M�dia das temperaturas entre 30�C e 45�C:  " << temperatura_mediana/cont <<"�C";
  
  cout<<"\n\n\n";
}
 
	
	


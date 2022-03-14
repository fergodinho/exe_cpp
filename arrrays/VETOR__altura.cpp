#include<iostream>
#include <iomanip> // PARA O setlocale


int const TAM=4;
float altura[TAM], acumulador=0, media=0;
int i=0, cont=0;

main()
{

using namespace std;

 setlocale(LC_ALL, "Portuguese"); 
 cout<<"\n\n\t  ****  PROGRAMA MÉDIA DOS ALUNOS  ****";
 
 cout<<"\n\n Informe a altura de "<<TAM<<" pessoas! \n";
 	for(i=0;i<TAM;i++) {
            cout<<"\n=> Informe a altura da "<<i+1<<"ª pessoa em metros: ";
            cin>>altura[i];          
            if ((altura[i]<=0) || (altura[i]>2.40)){
				do{
                cout<<" \n\a ** ERRO ENTRADA INVÁLIDA **\n Insira novamente a altura da "<<i+1<<"ª pessoa em metros: ";
                cin >>altura[i];
               
           		} while ((altura[i]<=0) || (altura[i]>2.40));
          	}
         
        acumulador= acumulador+altura[i];
         		
    } // fim do for
      
 media=acumulador/TAM;
 
    
      cout<<"\n\n Média da altura das pessoas:  " << media << "m\n\n ";	

 for(i=0;i<TAM;i++) {
		if (altura[i] > media){
			cont++;
		}
			
 }
	  		 		
      cout<< "Pessoa(s) com altura acima da média:  "<< cont << "\n\n";
}

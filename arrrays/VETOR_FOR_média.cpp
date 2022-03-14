#include<iostream>
#include <iomanip> // PARA O setlocale


int const TAM=4;
float notas[TAM], acumulador=0, media=0;
int i=0;

main()
{

using namespace std;

 setlocale(LC_ALL, "Portuguese"); 
 cout<<"\n\n\t  ***  PROGRAMA MÉDIA DOS ALUNOS  ***";
 
 cout<<"\n\nCerto! Então informe "<<TAM<<" notas \n";
 for(i=0;i<TAM;i++)
 
      {
            cout<<"\n=> Informe a "<<i+1<<"ª nota: ";
            cin>>notas[i];          

            if ((notas[i]<0) || (notas[i]>10)){
				do{
                cout<<" \n\a ** ERRO ENTRADA INVÁLIDA **\n Insira novamente a "<<i+1<<"ª nota: ";
                cin>>notas[i];
            } while ((notas[i]<0) || (notas[i]>10));
          }
         
          acumulador= acumulador + notas[i];
      }
      
      media=acumulador/TAM;
      cout<<"\n\n A média do aluno é:" << media << "\n\n";
}

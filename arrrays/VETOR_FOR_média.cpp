#include<iostream>
#include <iomanip> // PARA O setlocale


int const TAM=4;
float notas[TAM], acumulador=0, media=0;
int i=0;

main()
{

using namespace std;

 setlocale(LC_ALL, "Portuguese"); 
 cout<<"\n\n\t  ***  PROGRAMA M�DIA DOS ALUNOS  ***";
 
 cout<<"\n\nCerto! Ent�o informe "<<TAM<<" notas \n";
 for(i=0;i<TAM;i++)
 
      {
            cout<<"\n=> Informe a "<<i+1<<"� nota: ";
            cin>>notas[i];          

            if ((notas[i]<0) || (notas[i]>10)){
				do{
                cout<<" \n\a ** ERRO ENTRADA INV�LIDA **\n Insira novamente a "<<i+1<<"� nota: ";
                cin>>notas[i];
            } while ((notas[i]<0) || (notas[i]>10));
          }
         
          acumulador= acumulador + notas[i];
      }
      
      media=acumulador/TAM;
      cout<<"\n\n A m�dia do aluno �:" << media << "\n\n";
}

#include<iostream>
#include <iomanip> // PARA O setlocale


int const TAM=10;
 

int num[TAM],i,par=0,impar=0;
main()
{
      using namespace std;
      setlocale(LC_ALL, "Portuguese"); 
      cout<<"\n Progama PARES e �MPARES.";
      cout<<"\n Informe "<<TAM<<" n�meros. \n";
      //leitura
      for(i=0;i<TAM;i++)
      {
          cout<<"\n Informe o "<<i+1<<"o n�mero: ";
          cin>>num[i];
      }
      
     cout<<"\n\n N�meros pares: ";
      for(i=0;i<TAM;i++)
      {
          if(num[i]%2==0)
              cout<<"\n "<<num[i];
      }
      cout<<"\n\n Numeros �mpares: ";
      for(i=0;i<TAM;i++){
          if(num[i]%2!=0)
              cout<<"\n "<<num[i];
      }
      
      cout<<"\n\n ";
      
}





#include<iostream>
#include <iomanip> // PARA O setlocale


int const TAM=10;
 

int num[TAM],i,par=0,impar=0;
main()
{
      using namespace std;
      setlocale(LC_ALL, "Portuguese"); 
      cout<<"\n Progama PARES e ÍMPARES.";
      cout<<"\n Informe "<<TAM<<" números. \n";
      //leitura
      for(i=0;i<TAM;i++)
      {
          cout<<"\n Informe o "<<i+1<<"o número: ";
          cin>>num[i];
      }
      
     cout<<"\n\n Números pares: ";
      for(i=0;i<TAM;i++)
      {
          if(num[i]%2==0)
              cout<<"\n "<<num[i];
      }
      cout<<"\n\n Numeros Ímpares: ";
      for(i=0;i<TAM;i++){
          if(num[i]%2!=0)
              cout<<"\n "<<num[i];
      }
      
      cout<<"\n\n ";
      
}





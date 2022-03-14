/* Programa com a tabuada usando as estruturas de repetição
Com direito a Menu.

 

[F] Tabuada usando o FOR
[W] Tabuada usando o WHILE
[D] Tabuada usando o DO..WHILE
[S] Sair

 

*/
#include <iostream> 
#include <iomanip> 
using namespace std; 
int i, num;
char op;
 
main()
{
 setlocale(LC_ALL, "Portuguese"); 
 cout<<" \n=========================================  "; 
 cout<<" \n\t PROGRAMA TABUADA COM REPETIÇÕES  ";
 cout<<" \n=========================================  \n"; 
 cout<<"\n Informe um número para a tabuada\n => ";
 cin>>num;
 
 do {
 	cout<< "Entrada inválida. Digite um número positivo: ";
 	cin >> num; }
 		while (num<0);
 
 cout<<"\n Quer usar qual estrutura de repetição? ";
 cout<<"\n[F] - Tabuada usando o FOR ";
 cout<<"\n[W] - Tabuada usando o WHILE";
 cout<<"\n[D] - Tabuada usando o DO..WHILE";
 cout<<"\n[S] - Sair";
 cout<<"\n Escolha uma opção: "; 
 cin>>op;
 op = toupper(op); // transforma em letra maiúscula
 switch (op)
 {
     case 'F':{
               cout<<"\n Tabuada usando o FOR \n ";
               for(i=0;i<=10;i++)
               {
                cout<<"\n "<<num<<" * "<<i<<" = "<<num * i;
               }
              break;
         }
   case 'W':{ 
               cout<<"\n Tabuada usando o WHILE \n ";
               i=0;
               while(i<=10)
               {
                cout<<num<<"*"<<i<<"="<<i*num<<"\n";
                i++;
               }
             break;
         }    
    case 'D':{ 
               cout<<"\n Tabuada usando o Do..WHILE \n ";
               i=0;
               do {
                   cout<<"\n "<<num<<"  * "<<i<<" = "<<num * i;
                   i++;
                  } while (i<=10);
             break;
         }
     case 'S':{    
               system ("cls");
               cout<<"\n OBRIGADO POR UTILIZAR ESSE PROGRAMA \n ";
                cout<<"\n Em breve novas versões....AGUARDE...";
               break;
             }
             
      default: {
                 system ("cls");
                 cout<<"\n Escolha uma opção certa";
               break;
              }
              
 }
 
 cout<<"\n\n\n\n";
}

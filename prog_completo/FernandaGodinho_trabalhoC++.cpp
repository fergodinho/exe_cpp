#include <iostream>
#include <stdlib.h> // para usar o comando system
#include <iomanip>
#include <ctype.h> // para função toupper
#include <conio.h> // Para usar o getch();
#include <Windows.h> // para usar função sleep()
int op_principal;

using namespace std;

main ()
{
setlocale(LC_ALL, "Portuguese");
cout << fixed << setprecision(2);// deixar o float com 2 casas decimais

do{
   system ("cls"); // limpar a tela
   
   cout<<"\n\t\t ** PROGRAMA PRIMEIRO TRABALHINHO **";
   
   cout<<"\n\n> Utilize o menu abaixo para navegar pelo programa. Divirta-se!  \n";
   
   cout<<"\n     MENU:";
   
   cout<<"\n [1] Opçãoo sem IF e FOR";
   cout<<"\n [2] Desenho com o FOR";
   cout<<"\n [3] Verificaçãoo de dado com 'IF'";
   cout<<"\n [4] Torre de caracteres com DO WHILE";
   cout<<"\n [5] Torre de caracteres com o WHILE";
   cout<<"\n [6] Tabuadas com o FOR";
   cout<<"\n [7] Armazenamento de pesos utilizando vetor";
   cout<<"\n [8] Média de temperaturas utilizando vetor";
   cout<<"\n [9] Surpresinha";
   cout<<"\n [0] SAIR";                  
   
   cout<<"\n\n> Digite o número correspondente à sua opção:   ";
   cin>>op_principal;
	switch (op_principal) {
      	case 1:{
		 		cout<<" \n\n 		CASE 01 ";
 				cout<<" \n =====================================  ";
				cout<<" \n\t TIC-TAC - Contador  ";
				cout<<" \n =====================================  ";
 
				int contador, i; // variáveis 
 
				cout << " \n\n > Use esse programa para fazer uma contagem regressiva em segundos";
				cout << "\n\n > Com qual número que você deseja iniciar a contagem?  ";
				cin >> contador;
				
				cout << "\n\n ATENÇÃO! \n Seu tempo está acabando:\n";
				
				i=1;
				while (contador>=0){
				   		  cout<<"\n  "<< contador << "!";
						  contador=contador-1;
						  Sleep(800);
						  i++; //contador
							   }
							 
			  	 cout << "\n\n\a SEU TEMPO ACABOU!";
			  	 
              	 cout<<" \n\n# Digite uma tecla para retornar ao menu principal";
                 cout << "\n\n\n";
               
                 getch(); // espera digitar algo
                 break;
                 }
        case 2:{
               	 cout<<" \n\n 		CASE 02 ";
				 cout<<" \n =====================================  ";
				 cout<<" \n\tCONJUNTO DE TRIÂNGULOS  ";
				 cout<<" \n =====================================  ";
				
				int x=0, y=0, tam=10; // variáveis
				char res1, res2;      // variáveis
				
				 cout << "\n\n> Use esse programa para imprimir um conjunto de dois tri�ngulos com os caracteres escolhidos";
				 cout << "\n\n> Escolha o primeiro caractere:  ";
				 cin >> res1;
				 cout << "> Escolha o segundo caractere:  ";
				 cin >> res2;
				 cout << "\n\n";
					
				 for (x=0; x<tam; x++) {
					for (y=0; y<tam; y++){
						if (y>x)
						cout << " " << res1 << " " ;
						else
						cout << " " << res2<< " ";	
					}
				 cout << "\n";
				 }
					
             	 cout<<" \n\n# Digite uma tecla para retornar ao menu principal";
               	 cout << "\n\n\n";	
                 getch();
                 break;
             }
      	case 3:{
      			 cout<<" \n\n 	     CASE 03 ";
				 cout<<" \n =====================================  ";
				 cout<<" \n\tQue dia, que dia...  ";
				 cout<<" \n =====================================  ";
				 
				int dia_atual, mes_atual, ano_atual,dia_res, mes_res, ano_res, mes_total, ano_total; // variáveis
				 
				 cout << " \n\n> Use esse programa para saber informa��es sobre o dia do seu nascimento";
				 
				 cout << "\n\n> Insira o dia do seu nascimento:  ";
				 cin >> dia_res;
				 cout << "\n\n> Insira o m�s do seu nascimento:  ";
				 cin >> mes_res;
				 cout << "\n\n> Insira o ano do seu nascimento:  ";	
				 cin >>ano_res;
				
				 cout << "\n\n> Insira o dia da data de hoje:   ";
				 cin >> dia_atual;
				 cout << "\n\n> Insira o m�s da data hoje:   ";	
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
					
				 		
				 cout << " \n\n\n\n\a      > Você nasceu em um(a)";
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
			  	 cout<<" \n\n# Digite uma tecla para retornar ao menu principal";
             	 cout << "\n\n\n";
              
              getch();
              break;
              }
      	case 4:{
              
				 cout<<" \n\n 		CASE 04 ";
				 cout<<" \n =====================================  ";
				 cout<<" \n   Torre de Caracteres com 'DO-WHILE'  ";
				 cout<<" \n =====================================  ";
				
				int linha=0, coluna=0; // vari�veis
				
				 cout << " \n\n> Use esse programa para ver uma torre de caracteres\n\n";
				 
				 cout << endl;
				 linha = 1;
					do
					{
					coluna = 0;
						while (coluna < linha)
						{
						cout << "*";
						coluna = coluna + 1;
						}
				
					cout << endl;
					linha = linha + 1;
					} while (linha < 8);
					
				 cout << "\n\n\n";
			  	 cout<<" \n\n> Digite uma tecla voltar para o menu principal";
              	 cout << "\n\n\n";
              
              getch();
              break;
             }
      	case 5:{
      			 cout<<" \n\n 		CASE 05 ";
				 cout<<" \n =====================================  ";
				 cout<<" \n    Torre de Caracteres com 'WHILE'  ";
				 cout<<" \n ===================================== ";
				
				int linha=0, coluna=0;
				
				 cout << " \n\n> Use esse programa para ver uma torre de caracteres\n\n";
				 
				 cout << endl;
				 linha = 1;
				 
				 while (linha < 8) {
							coluna = 0;
							while (coluna < linha) {
								cout << "*";
								coluna = coluna + 1;
							}
							cout << endl;
							linha = linha + 1;
				 } 
					
				 cout << "\n\n\n";	
				      	
				 cout<<" \n\n# Digite uma tecla para retornar ao menu principal";
				 cout << "\n\n\n";
              
              	 getch();
               	 break;
             	 }
      	case 6:{
      			 cout<<" \n\n		CASE 06 ";
				 cout<<" \n =====================================  ";
				 cout<<" \n                Tabuada";
				 cout<<" \n =====================================  ";
				 
				int i=1, res1, res2; // vari�veis
				
				 cout << " \n\n> Use esse programa para ver as tabuadas desejadas";
				
				 cout<<" \n\n> Digite o número que você gostaria de saber a tabuada:   ";
				 cin>> res1;
				
				 cout<<"\n\n> Até qual número você gostaria de ver a tabuada do "<< res1 << "?   ";
				 cin>> res2;
					
				 cout << "\n> Tabuada do: " << res1 << " até o número: "<< res2 << " \n";
				
					for (i;i<=res2;i++) {
				
						cout << "\n  " << res1 << " x " << i <<" = " << i*res1 ;
				
					}
				 cout << "\n\n\n";
				 cout<<" \n\n# Digite uma tecla para retornar ao menu principal";
              	 cout << "\n\n\n";
              
              	 getch();
              	 break;
        	   }
      	case 7:{
				 cout<<" \n\n 		CASE 07 ";
				 cout<<" \n =====================================  ";
				 cout<<" \n           Vetores de Peso";
				 cout<<" \n =====================================  ";
				
				int i=0, op=0, maior, menor; //vari�veis
				int const TAM=2;
				float peso[TAM], peso_total=0;
				
				 cout << " \n\n> Use esse programa para obter diferentes informações acerca dos vetores informados";
				
					for (i;i<=TAM; i++){
						cout << "\n\n> Digite o " << i+1 << "º peso em Kg:   ";
						cin >> peso [i];
						peso_total = peso_total + peso [i];
						if (i==0)// Funciona somente uma vez e serve para inicializar as vari�veis: MAIOR e MENOR
							{
							menor = peso[i];
							maior = peso[i];
							}
							if (peso[i] > maior)
							{ maior = peso[i];
							}
							if (peso[i] < menor)
							{ menor = peso[i];
							}
				
					} // TEMINA O FOR
				 do {
				 	 system ("cls"); // limpar a tela					
				 	 cout << "\n\n> Selecione no menu abaixo o que você gostaria de saber:";
				 	 cout << "\n\n MENU\n";
				 	 cout << "\n [1] - Saber a média dos pesos";
				 	 cout << "\n [2] - Saber o maior peso digitado";
				 	 cout << "\n [3] - Saber o menor peso digitado";
					 cout << "\n [4] - SAIR";
					 cout << " \n\n\n> Digite aqui o número correspondente à sua opção:   ";
					 cin >> op;
				 

					 switch (op){
						case 1: {
								  cout << "\n> Média dos pesos digitados:   " << peso_total/(TAM+1) <<"Kg";
								  cout<<" \n\n# Digite uma tecla para retornar ao menu deste programa";
                				  cout << "\n\n\n";
               
                				  getch(); // espera digitar algo
								  break;
								 }
						 case 2: {
								  cout<< "\n> Maior peso digitado:   " << maior <<"Kg";
								  cout<<" \n\n# Digite uma tecla para retornar ao menu deste programa";
                				  cout << "\n\n\n";
               
                				  getch(); // espera digitar algo							
								  break;
						 		 }
						 case 3: {
								  cout<< "\n> Menor peso digitado:   " << menor <<"Kg";			
								  cout<<" \n\n# Digite uma tecla para retornar ao menu deste programa";
                				  cout << "\n\n\n";
               
                				  getch(); // espera digitar algo							
							  	  break;
					 	 		 }
				         case 4: {
						          cout<<"\n\n Aperte qualquer tecla para finalizar o programa.\n ";
						          getch();
				              	  break;
				          		   }			
					 	  default: {
									cout <<" \n> Opção inválida!";
									break;
						 		   }
					}
				 } while (op!=4);
				 
				 cout << "\n\n\n";     	
			 	 cout<<" \n\n# Digite uma tecla para retornar ao menu principal";
              	 cout << "\n\n\n";
              
              	 getch();
              	 break;
            	}
      	case 8:{
				 cout<<" \n\n 		CASE 08 ";
				 cout<<" \n =====================================  ";
				 cout<<" \n        Vetores de Temperatura";
				 cout<<" \n =====================================  ";
				 
				int const TAM = 3; // variáveis
				int i;
				float temperatura[TAM], acum_temperaturas=0,maior, menor;
				cout << fixed << setprecision(1);// deixar o float com 2 casas decimais
				
				 cout<<"\n\n> Use o programa para obter a MAIOR e MENOR temperatura em �C de uma semana";
				
				 for(i=0;i<TAM;i++) {
						cout<<"\n\n> Informe a " <<i+1<<"ª temperatura:   ";
						cin>>temperatura[i];
							if (i==0)// Funciona somente uma vez e serve para inicializar as vari�veis: MAIOR e MENOR
							{
							menor = temperatura[i];
							maior = temperatura[i];
							}
							if (temperatura[i] > maior)
							{ maior = temperatura[i];
							}
							if (temperatura[i] < menor)
							{ menor = temperatura[i];
							}
				 		acum_temperaturas=acum_temperaturas+temperatura[i];
				 }// Termina o FOR
					
				 cout<<"\n> Menor temperatura da semana       "<<menor<<"ºC";
				 cout<<"\n> Maior temperatura da semana       "<<maior<<"ºC";
				 cout<<"\n> M�dia de temperaturas da semana   "<<acum_temperaturas/TAM<<"ºC";				
				 cout<<"\n\n\n";
				 
			  	 cout<<" \n\n# Digite uma tecla para retornar ao menu principal";
              	 cout << "\n\n\n";
              
              	 getch();
              	 break;
             	 }
      	case 9:{
				 cout<<" \n\n        	CASE 09";
				 cout<<" \n =====================================  ";
				 cout<<" \n           >  SURPRESINHA  <";
				 cout<<" \n =====================================  ";
				
				int i=0,  chances=8, acertos=0, res_final; // variáveis
				int const tam=11;
				char secreta[tam], letra[1];
				bool acerto=false; // end variáveis
				
				 cout << "\n\n> JOGO PARA ADIVINHAR A PALAVRA SECRETA";
				 
				 cout << "\n\n INSTRUÇÕES DO JOGO:"; // instruções
				 cout <<"\n 1. A palavra secreta foi escolhida previamente pela programadora";
				 cout <<"\n 2. Você deverá digitar as letras individualmente para o programa verificar o acerto ou erro";
				 cout << "\n 3. Você possui 8 chances";
				 cout <<"\n 4. A cada tentativa errada voc� perde uma chance";// end instru��es
				 
				 cout <<" \n\n\t    > VAMOS JOGAR! <\n\n\n";
				 system("pause");
				 system("cls");
					
					char palavra[]="SURPRESINHA";
					
						for (i;i<11;i++){
						secreta[i]='_';
						} // termina o FOR
				inicio:		
						while ((chances>0)&&(acertos<tam)) {
							cout << "\n\n> JOGO PARA ADIVINHAR A PALAVRA SECRETA";
							cout << "\n\n   Chances restantes:   " << chances;									
							cout << "\n   Acertos:   " << acertos;										
							cout << "\n\n\n> A palavra secreta �:   ";
				
							for (i=0;i<tam; i++) {
									cout << " " << secreta[i] << " ";
							}
				
							cout <<"\n\n> Digite uma letra:   ";
							cin >> letra [0];
							letra [0] = toupper (letra [0]);
							
							for (i=0;i<tam;i++){
								if (palavra[i]==letra[0]){
									acerto=true;
									secreta[i]=palavra[i];
									acertos++;
								}
				
							}
				
							if(!acerto){
							chances--;
							}
				
						acerto=false;
						system("cls");
						} // termina o WHILE
					
					if (acertos==tam){
						cout << "\n\n\n\n\a>  PARABÉNS, VOCÊ VENCEU!  A PALAVRA SECRETA ERA 'SURPRESINHA'  <";

					}

					else {
						cout << "\n\n\n\n\a>  QUE PENA, VOCÊ PERDEU! TENTE NOVAMENTE OUTRO DIA <";

						}

				 cout << "\n\n\n";     	
			   	 cout<<" \n\n# Digite uma tecla para retornar ao menu principal";
              	 cout << "\n\n\n";
					 
						             
              	 getch();
              	 break;
             	}
      	case 0:{
              system ("color 8");
              cout<<"\n\n> Aperte qualquer tecla para finalizar COMPLETAMENTE o programa \n ";
              
              getch();
              break;
             }												          
      default: {
              cout<<"\n\n\a     >  OPÇÃO INVÁLIDA  <";
              
              getch();
              break;
             }
	}  // fecha o SWITCH
 } while(op_principal!=0);
 
 
 cout<<"\n\n\n      ###  Obrigada pela sua visita  ###"; 
 cout<<"\n\n\n ";
}




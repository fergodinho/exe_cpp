/*FUP que leia um vetor de 10 números, verifique
quantos números
negativos há no vetor e quantos números positivos.
*/

#include<iostream>
using namespace std;

int const TAM = 3;
int i,vetor[TAM],positivo=0, negativo=0;

main()
{
setlocale(LC_ALL, "Portuguese");
cout<<"\n \tPrograma de Vetores: Positivos e Negativos";
cout<<"\n\n Informe "<<TAM<< " Números para o Vetor ";

// LEITURA DO VETOR
 for(i=0;i<TAM;i++){
	cout<<"\n\n Digite o " <<i+1<<"º Número: ";
	cin>>vetor[i]; // LEITURA DO VETOR
		if (vetor[i] >=0)
			positivo++; // positivo = positivo + 1;
		else
			negativo++; // negativo = negativo +1;
 } // FIM DO FOR

 cout<<"\n\n A quantidade de Números Positivos no Vetor é: "<<positivo;
 cout<<"\n\n A quantidade de Números Negativos no Vetor é: "<<negativo;
 cout<<"\n\n Os Números Negativos no Vetor são: ";
//Mostrar quais foram os números negativos
 
 for(i=0;i<TAM;i++) {
		if (vetor[i] < 0 )
			cout<< " "<< vetor[i];
 }

cout<<"\n\n\n";
}

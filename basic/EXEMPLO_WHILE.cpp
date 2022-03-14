

#include <iostream>
#include <iomanip> 

using namespace std;

int main( ){

int linha, coluna;
linha = 1;
while (linha < 5)
{
coluna = 1;
while (coluna < 5)
{
cout << setw(3) << linha * coluna;
cout << endl;
coluna = contador + 1;
}
linha = linha + 1;
}

#include<stdio.h>

int main(){

    int termo, i, a, b, fibonacci;

    printf("Digite o termo que deseja da sequencia de Fibonacci: ");
    scanf("%d", &termo);

    printf("1");
    a = 0;
    b = 1;

    for(i = 1; i < termo; i++){
        fibonacci = a + b;
        a = b;
        b = fibonacci;
        printf(", %d", fibonacci);
    }


return 0;
}

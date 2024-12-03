#include <stdio.h>

int main() {
    double N;
    int notas, moedas;
    
    scanf("%lf", &N);
    
    int valor = (int)N;
    int centavos = (N - valor) * 100 + 0.5;
    
    printf("NOTAS:\n");
    notas = valor / 100;
    printf("%d nota(s) de R$ 100.00\n", notas);
    valor %= 100;
    
    notas = valor / 50;
    printf("%d nota(s) de R$ 50.00\n", notas);
    valor %= 50;
    
    notas = valor / 20;
    printf("%d nota(s) de R$ 20.00\n", notas);
    valor %= 20;
    
    notas = valor / 10;
    printf("%d nota(s) de R$ 10.00\n", notas);
    valor %= 10;
    
    notas = valor / 5;
    printf("%d nota(s) de R$ 5.00\n", notas);
    valor %= 5;
    
    notas = valor / 2;
    printf("%d nota(s) de R$ 2.00\n", notas);
    valor %= 2;
    
    printf("MOEDAS:\n");
    moedas = valor;
    printf("%d moeda(s) de R$ 1.00\n", moedas);

    moedas = centavos / 50;
    printf("%d moeda(s) de R$ 0.50\n", moedas);
    centavos %= 50;
    
    moedas = centavos / 25;
    printf("%d moeda(s) de R$ 0.25\n", moedas);
    centavos %= 25;
    
    moedas = centavos / 10;
    printf("%d moeda(s) de R$ 0.10\n", moedas);
    centavos %= 10;
    
    moedas = centavos / 5;
    printf("%d moeda(s) de R$ 0.05\n", moedas);
    centavos %= 5;
    
    moedas = centavos / 1;
    printf("%d moeda(s) de R$ 0.01\n", moedas);
    
    return 0;
}

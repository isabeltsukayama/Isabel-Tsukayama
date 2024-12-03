#include <stdio.h>

int main() {
    int tempo, velocidade;
    double distancia, litros;
    const double CONSUMO = 12.0; // Consumo do carro em km/l
    
    scanf("%d %d", &tempo, &velocidade);
    
    distancia = tempo * velocidade;
    litros = distancia / CONSUMO;
    
    printf("%.3lf\n", litros);
    
    return 0;
}

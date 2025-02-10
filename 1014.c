#include <stdio.h>

int main() {
    int X;
    double Y, consumoMedio;
    
    scanf("%d %lf", &X, &Y);
    
    consumoMedio = X / Y;
    
    printf("%.3lf km/l\n", consumoMedio);
    
    return 0;
}

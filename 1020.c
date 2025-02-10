#include <stdio.h>

int main() {
    int idade, resultado_ano = 0, resultado_mes = 0, restante_para_dias = 0;

    
    scanf("%d", &idade);

    if (idade >= 365) {
        
        resultado_ano = idade / 365;
        
        int restante_para_meses = idade - (resultado_ano * 365);
        resultado_mes = restante_para_meses / 30;
        
        restante_para_dias = restante_para_meses - (resultado_mes * 30);
    } else if (idade >= 30) {
        
        resultado_mes = idade / 30;
        restante_para_dias = idade - (resultado_mes * 30);
    } else {
        
        restante_para_dias = idade;
    }

    
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", resultado_ano, resultado_mes, restante_para_dias);

    return 0;
}

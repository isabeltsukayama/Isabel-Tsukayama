#include <stdio.h>

int main() {
    char name[100];
    double fixed_salary, sales_total, total_salary;
    
    scanf("%s", name);
    scanf("%lf", &fixed_salary);
    scanf("%lf", &sales_total);
    
    total_salary = fixed_salary + (sales_total * 0.15);
    
    printf("TOTAL = R$ %.2lf\n", total_salary);
    
    return 0;
}

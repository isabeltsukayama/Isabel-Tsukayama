#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 1000

int check_parenthesis(const char *expression) {
    int balance = 0;
    for (int i = 0; expression[i] != '\0'; i++) {
        if (expression[i] == '(') {
            balance++;
        } else if (expression[i] == ')') {
            if (balance == 0) {
                return 0;
            }
            balance--;
        }
    }
    return balance == 0;
}

int main() {
    char expression[MAX_LENGTH];
    while (fgets(expression, MAX_LENGTH, stdin) != NULL) {
        expression[strcspn(expression, "\n")] = '\0';
        if (check_parenthesis(expression)) {
            printf("correct\n");
        } else {
            printf("incorrect\n");
        }
    }
    return 0;
}

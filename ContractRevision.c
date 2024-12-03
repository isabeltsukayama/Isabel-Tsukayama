#include <stdio.h>
#include <string.h>

int main() {
    int D;
    char N[101];

    while (1) {
        scanf("%d %s", &D, N);
        if (D == 0 && N[0] == '0') {
            break;
        }

        int len = strlen(N);
        char result[101];
        int resultIndex = 0;

        for (int i = 0; i < len; i++) {
            if (N[i] != D + '0') {
                result[resultIndex++] = N[i];
            }
        }
        
        result[resultIndex] = '\0';

        if (resultIndex == 0) {
            printf("0\n");
        } else {
            // Remove leading zeros
            int start = 0;
            while (result[start] == '0' && start < resultIndex) {
                start++;
            }

            if (start == resultIndex) {
                printf("0\n");
            } else {
                printf("%s\n", result + start);
            }
        }
    }

    return 0;
}

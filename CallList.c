#include <stdio.h>
#include <string.h>

void sort_names(char names[][21], int n) {
    for (int i = 0; i < n - 1; i++) {
        int min_idx = i;
        for (int j = i + 1; j < n; j++) {
            if (strcmp(names[j], names[min_idx]) < 0) {
                min_idx = j;
            }
        }
        if (min_idx != i) {
            char temp[21];
            strcpy(temp, names[i]);
            strcpy(names[i], names[min_idx]);
            strcpy(names[min_idx], temp);
        }
    }
}

int main() {
    int n, k;
    scanf("%d %d", &n, &k);

    char names[n][21];
    for (int i = 0; i < n; i++) {
        scanf("%s", names[i]);
    }

    sort_names(names, n);
    printf("%s\n", names[k - 1]);

    return 0;
}

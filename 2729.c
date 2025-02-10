#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_ITEMS 1000
#define MAX_LENGTH 21

int compare(const void *a, const void *b) {
    return strcmp(*(const char **)a, *(const char **)b);
}

void process_shopping_list(char *input) {
    char *items[MAX_ITEMS];
    int count = 0;
    char *token = strtok(input, " ");
    
   
    while (token != NULL) {
        int is_duplicate = 0;
        
        for (int i = 0; i < count; i++) {
            if (strcmp(items[i], token) == 0) {
                is_duplicate = 1;
                break;
            }
        }
        
        if (!is_duplicate) {
            items[count] = token;
            count++;
        }
        
        token = strtok(NULL, " ");
    }
    
   
    qsort(items, count, sizeof(char *), compare);

 for (int i = 0; i < count; i++) {
        printf("%s", items[i]);
        if (i < count - 1) {
            printf(" ");
        }
    }
    printf("\n");
}

int main() {
    int n;
    scanf("%d\n", &n);

    for (int i = 0; i < n; i++) {
        char line[20000];
        fgets(line, sizeof(line), stdin);
        
       
        line[strcspn(line, "\n")] = '\0';
        
        process_shopping_list(line);
    }

    return 0;
}

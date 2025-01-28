#include <stdio.h>
#include <stdlib.h>


typedef struct Node {
    int key;
    struct Node* next;
} Node;


Node* createNode(int key) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->key = key;
    newNode->next = NULL;
    return newNode;
}


void insert(Node** hashTable, int index, int key) {
    Node* newNode = createNode(key);
    if (hashTable[index] == NULL) {
        hashTable[index] = newNode;
    } else {
        Node* temp = hashTable[index];
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}


void printHashTable(Node** hashTable, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ->", i);
        Node* temp = hashTable[i];
        while (temp != NULL) {
            printf(" %d ->", temp->key);
temp = temp->next;
        }
        printf(" \\\n");
    }
}


int main() {
    int N; 
    scanf("%d", &N);

    for (int t = 0; t < N; t++) {
        if (t > 0) {
            printf("\n"); 
        }

        int M, C;
        scanf("%d %d", &M, &C);

        Node** hashTable = (Node*)malloc(M * sizeof(Node));
        for (int i = 0; i < M; i++) {
            hashTable[i] = NULL;
        }

        for (int i = 0; i < C; i++) {
            int key;
            scanf("%d", &key);
            int index = key % M;
            insert(hashTable, index, key);
        }

        printHashTable(hashTable, M);

        
        for (int i = 0; i < M; i++) {
            Node* temp = hashTable[i];
while (temp != NULL) {
                Node* toFree = temp;
                temp = temp->next;
                free(toFree);
            }
        }
        free(hashTable);
    }

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int u, v, w;
} Edge;

int compare(const void *a, const void *b) {
    Edge *edgeA = (Edge *)a;
    Edge *edgeB = (Edge *)b;
    return edgeA->w - edgeB->w;
}

int find(int parent[], int x) {
    if (parent[x] != x) {
        parent[x] = find(parent, parent[x]);
    }
    return parent[x];
}

void unionSets(int parent[], int rank[], int x, int y) {
    int rootX = find(parent, x);
    int rootY = find(parent, y);

    if (rootX != rootY) {
        if (rank[rootX] > rank[rootY]) {
            parent[rootY] = rootX;
        } else if (rank[rootX] < rank[rootY]) {
            parent[rootX] = rootY;
        } else {
            parent[rootY] = rootX;
            rank[rootX]++;
        }
    }
}

int main() {
    while (1) {
int m, n;
        scanf("%d %d", &m, &n);

        if (m == 0 && n == 0) break;

        Edge edges[n];
        int total_cost = 0;

        for (int i = 0; i < n; i++) {
            scanf("%d %d %d", &edges[i].u, &edges[i].v, &edges[i].w);
            total_cost += edges[i].w;
        }

        
        qsort(edges, n, sizeof(Edge), compare);

        int parent[m], rank[m];
        for (int i = 0; i < m; i++) {
            parent[i] = i;
            rank[i] = 0;
        }

        int mst_cost = 0;
        int edges_used = 0;

        for (int i = 0; i < n && edges_used < m - 1; i++) {
            int u = edges[i].u;
            int v = edges[i].v;
            int w = edges[i].w;

            if (find(parent, u) != find(parent, v)) {
                unionSets(parent, rank, u, v);
                mst_cost += w;
                edges_used++;
            }
        }
printf("%d\n", total_cost - mst_cost);
    }

    return 0;
}

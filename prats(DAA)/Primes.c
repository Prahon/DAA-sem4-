#include <stdio.h>
#define MAX 20
#define INF 9999

int minKey(int key[], int mst[], int V){
    int min = INF, min_index = -1, v;
    for(v = 0; v < V; v++){
        if(mst[v] == 0 && key[v] < min){
            min = key[v];
            min_index = v;
        }
    }
    return min_index;
}

int main(){
    int V,i,j,u,v;
    int graph[MAX][MAX], parent[MAX], key[MAX], mst[MAX];

    printf("Enter number of vertices: ");
    scanf("%d",&V);

    printf("Enter adjacency matrix (use 0 for no edge):\n");
    for(i=0;i<V;i++){
        for(j=0;j<V;j++){
            scanf("%d",&graph[i][j]);
            if(graph[i][j] == 0 && i != j)
                graph[i][j] = INF;
        }
    }

    for(i=0;i<V;i++){
        key[i] = INF;
        mst[i] = 0;
    }

    key[0] = 0;
    parent[0] = -1;

    for(i=0;i<V-1;i++){
        u = minKey(key,mst,V);
        mst[u] = 1;

        for(v=0;v<V;v++){
            if(graph[u][v] < key[v] && mst[v] == 0){
                parent[v] = u;
                key[v] = graph[u][v];
            }
        }
    }

    printf("Edges in MST:\n");
    for(i=1;i<V;i++){
        printf("%d - %d : %d\n", parent[i], i, graph[i][parent[i]]);
    }

    return 0;
}

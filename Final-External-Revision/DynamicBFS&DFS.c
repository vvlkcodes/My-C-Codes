// Dynamic BFS and DFS traversal 

#include <stdio.h>
# define MAX 20
# define N 5

int visited[MAX];
int queue[MAX];
int front = -1;
int rear = -1;

void bfs(int adj[MAX][MAX], int start){
    for(int i=0;i<N;i++){
        visited[i] = 0;
    }
    front = rear = -1;
    queue[++rear] = start;
    visited[start] = 1;
    
    while(front != rear){
        int node = queue[++front];
        printf("%d ", node);
        for(int i=0;i<N;i++){
            if(adj[node][i] == 1 && visited[i] == 0){
                queue[++rear] = i;
                visited[i] = 1;
            }
        }
    }
    printf("\n");
}

void dfs(int adj[MAX][MAX], int start){
    printf("%d ", start);
    visited[start] = 1;
    for(int i=0;i<N;i++){
        if(adj[start][i] == 1 && visited[i] == 0){
            dfs(adj, i);
        }
    }
}

int main(){
    int adj[MAX][MAX];
    int m;
    printf("Enter the size of the 2d matrix: ");
    scanf("%d", &m);
    printf("Enter the elements of the array: ");
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            scanf("%d", &adj[i][j]);
        }
    }
    int start = 0;
    printf("BFS traversal: \n");
    bfs(adj, start);
    for(int i=0;i<MAX;i++){
        visited[i] = 0;
    }
    printf("\nDFS traversal: \n");
    dfs(adj, start);
    return 0;
}

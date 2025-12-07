// Static BFS and DFS traversal 

#include <stdio.h>
# define MAX 20
# define N 5

int adj[MAX][MAX] = {
    {0, 1, 1, 0, 0},
    {1, 0, 1, 1, 0},
    {1, 1, 0, 0, 1},
    {0, 1, 0, 0, 1},
    {0, 0, 1, 1, 0}
};
int visited[MAX];
int queue[MAX];
int front = -1;
int rear = -1;

void bfs(int start){
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

void dfs(int start){
    printf("%d ", start);
    visited[start] = 1;
    for(int i=0;i<N;i++){
        if(adj[start][i] == 1 && visited[i] == 0){
            dfs(i);
        }
    }
}

int main(){
    int start = 0;
    printf("BFS traversal: \n");
    bfs(start);
    for(int i=0;i<MAX;i++){
        visited[i] = 0;
    }
    printf("\nDFS traversal: \n");
    dfs(start);
    return 0;
}ss

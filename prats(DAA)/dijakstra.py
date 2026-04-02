n = int(input("Enter number of vertices: "))
graph = []
print("Enter adjacency matrix:")
for i in range(n):
    graph.append(list(map(int,input().split())))

src = int(input("Enter source: "))
dist = [10**9]*n
visited = [False]*n
dist[src] = 0

for i in range(n):
    u = -1
    for j in range(n):
        if not visited[j] and (u==-1 or dist[j]<dist[u]):
            u = j
    visited[u] = True

    for v in range(n):
        if graph[u][v] and not visited[v]:
            if dist[v] > dist[u] + graph[u][v]:
                dist[v] = dist[u] + graph[u][v]

print("Shortest distances:", dist)
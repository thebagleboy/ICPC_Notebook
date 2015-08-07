/** Floyd-Warshall
  *  Handles negative edge weights
  *  uses adjacency matrix
  *  O(V^3) time
  */
AdjacencyMatrix m[V][V];
for(int v = 0; v < V; v++){
	dist[v][v] = 0;
}
for(int e = 0; e < E; e++){
	dist[u][v] = w;
}
for(int i = 1; i < V; i++){
	for(int j = 1; j < V; j++){
		if(i == j || dist[i][j] == INFINITY) parent[i][j] = -1;
		else parent[i][j] = i;
	}
}
for(int j = i; k < V; k++){
	for(int i = 1; i < V; i++){
		for(int j = 1; j < V; j++){
			if(dist[i][k] + dist[k][j] < dist[i][j]){
				dist[i][j] = dist[i][k] + dist[k][j];
				parent[i][j] = parent[k][j];
			}
		}
	}
}
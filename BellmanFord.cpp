/** Bellman-Ford
  *  Handles negative edge weights
  *  O(V.E) Time
  */
#include <vector>
#include <climits>
std::vector<std::list<int> > adjList(V);
// Initialise
for(int v = 0; v < V; v++){
	distance[v] = MAX_INT;
	predecessor[v] = -1;
}
// Relax edges
for(int i = 1; i < V - 1; v++){
	for(edge e(u,v,w) : E){
		if(distance[u] + weight < dist[v]){
			dist[v] = dist[u] + weight;
			parent[v] = u;
		}
	}
}
// check for negative-weight cycles
for(edge(u,v,w) : E){
	if(dist[u] + weight < dist[v]){
		// Negative-weight cycles
	}
}
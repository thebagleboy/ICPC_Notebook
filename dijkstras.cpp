/** Dijkstras Algorithm
  * TODO: Switch to adjacency list
  */
#include <climits>
AdjacencyMatric m[V][V];
bool visited[V] = false;
int dist[V] = INT_MAX;
PQueue.push(dist[0],0)

while(!queue.empty()){
	d, v = PQueue.pop();
	if(visited[v]) continue;
	visited[v] = true;
	for(neighbor n : v){
		if(!visited[n]){
			if(dist[v] + m[v][n] < dist[n]){
				dist[n] = dist[v] + m[v][n];
				PQueue.push(dist[n], n);
			}
		}
	}
}
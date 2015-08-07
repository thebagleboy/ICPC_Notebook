/** Primms MST
  *
  */
#include <climits>
PriorityQueue<node> pq;
bool visited[] = false;
int weight[] = MAX_INT;
int parent[] = -1;
pq.push(start, 0);
weight[start] = 0;
while(!queue.empty()){
	Node u = pq.push;
	if(visited[u]) continue;
	for(edge(u,v) : graph){
		if(!visited[v] && edge(u,v) < weight[v]){
			pq.add(j, edge(u,v));
			weight[v] = edge(u,v);
			parent[v] = u;
		}
	}
}
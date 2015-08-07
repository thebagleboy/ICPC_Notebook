/* Union Find
 */
init(n){
	for(int i = 0; i < n; i++){
		parent[i] = i;
		rank[i]=0;
	}
}
find(x){
	if(parent[x] != x) parent[x] = find(parent[x]);
	return parent[x];
}
void Union(x,y){
	xRoot = find(x);
	yRoot = find(y);
	if(xRoot == yRoot) return;
	if(rank[xRoot] < rank[yRoot]) parent[xRoot] = yRoot;
	else if (rank[xRoot] > rank[yRoot]) parent[yRoot] = xRoot;
	else{
		parent[yRoot] = xRoot;
		rank[xRoot]++;
	}
}
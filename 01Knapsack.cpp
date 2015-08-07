/** 0-1 Knapsack Problem
  */
values v[];
weights w[];
numItems n;
capacity W;

max[n][w] = 0;
for(int i = 1; i < n; i++){
	for int j = 0; j < w; j++){
		if(w[i] <= j){
			m[i][j] = std::max( m[i-1][j], m[i-1][j-w[i]] + v[i]);
		} else {
			m[i][j] = m[i-1][j];
		}
	}
}
/** Longest Increasing Subsequence
  */
int len[n];
len[0] = 1;
for(int i = 1; i < n; i++){
	for(int j = 0; j < i; j++){
		if(L[i] > L L[j]) len[i] = max(len[i], len[j] + 1);
	}
}

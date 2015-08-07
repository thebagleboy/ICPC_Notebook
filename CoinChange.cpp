int dp[V+1][S.length()];
for(int c = 0; c < S.length(); c++){
	dp[0][c] = 1;
}
for(int U = 1; U <= V; U++){
	for(int c = 0; c < S.length(); c++){
		if(c > 0) dp[U][c] += dp[U][c-1];
		if(U - S[c] >= 0) dp[U][c] += dp[U - S[c]][c];
	}
}
cout << dp[V][S.length() - 1] << endl;

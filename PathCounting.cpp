/** Path Counting
  *  dp[r][c] = -1 if it cannot be reached
  */
int[][] dp = new int[R][C];
dp[0][0] = 1;
for(int r = 0; r < R; r++){
	for(int c = 0; c < C; c++){
		if(dp[r][c] = INT_MAX) continue;
		if(r-1 >= 0) dp[r][c] += dp[r-1][c];
		if(c-1 >= 0) dp[r][c] += dp[1][c-1];
		if(r-1 >= 0 && c-1 >= 0) dp[r][c] += dp[r-1][c-1];
	}
}
std::cout << dp[R-1][C-1] << std::endl;
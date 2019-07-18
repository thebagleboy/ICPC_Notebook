function levenshteinDistance( s1, s2 )
{
	var len1 = s1.length, len2 = s2.length;
	if(len1 == 0) { return len2; } if(len2 == 0) { return len1; }
	var cols = new Array(len1 + 1);
	for(var i = 0; i < len1 + 1; i++) { cols[i] = new Array(len2 + 1).fill(0); }
	for(var i = 0; i < cols.length; i++) { cols[i][0] = i; }
	for(var i = 0; i < cols[0].length; i++) { cols[0][i] = i; }

	for(var i = 1; i < cols.length; i++)
	{
		for(var j = 1; j < cols[i].length; j++)
		{
      var cost;
		  if( s1.charAt(i) == s2.charAt(j) ) { cost = 0; } else { cost=1; }
      cols[i][j] = Math.min(
        cols[i-1][j]+1,
        cols[i][j-1]+1,
        cols[i-1][j-1]+cost);
		}
  }
  return cols[len1][len2];
}

GCD(x,y){
	if(y==0) return x;
	return GCD(y, x % y);
}

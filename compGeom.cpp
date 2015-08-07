struct point{
	int x;int y;
};
struct line{
	point s;
	point e;
};

/* =0 if colinear
 *  <0 if b is 'right'
 *  >0 if b is 'left'
 */
int cProd2d(point a, point b){
	return a.x * b.y - a.y * b.x;
}

/* Return 0 if orthoganal */
int dProd2d(point a, point b){
	return a.x*b.x + a.y*b.y;
}

int doubleArea(point poly[]){
	if(poly.size() < 3) return 0;
	int area = 0;
	for(int i = 2; i < poly.size(); i++){
		area += cProd(poly[i],poly[i+1]);
	}
	return area;
}


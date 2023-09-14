#include "stdio.h"
#include "stdlib.h"

int power(int x, int y){
	int ans = 1;
	
	for (int i = 0; i<y; i++) {
		ans *= x;
	}
	
	return ans;
}

int distance(short xj, short xi, short yj, short yi, short d){
	int ans1, ans2;
	
	ans1 = power(abs(xj-xi), d);
	ans2 = power(abs(yj-yi), d);

	return ans1+ans2;
}

int main(){
	short n, d, ar[1001][1001];

	scanf("%hd %hd", &n, &d);

	for (int i = 0; i<n; i++) {
		for (int j = 0; j<2; j++) {	
			scanf("%hd", &ar[i][j]);
		}
	}

	int min = 100000000, max = 0;

	for (int i = 0; i<n; i++) {
		for (int j = i+1; j<n; j++) {
			int res = distance(ar[j][0], ar[i][0], ar[j][1], ar[i][1], d);	
			//printf("%hd %hd\n", ar[j][1], ar[i][1]);
			//printf("%d,%d -> %d\n\n", i,j, res);

			if(res < min){
				min = res;
			}

			if(res > max){
				max = res;
			}
		}
	}

	printf("%d %d", min, max);

	return 0;
}

#include "stdio.h"
#include <cstdio>

int main(){
	int i, n, t, a[2][1001], x, y;
	char p, q;

	scanf("%d", &n);

	for (i=0; i<2; i++) {
		for (int j = 0; j<n; j++) {
			scanf("%d", &a[i][j]);
		}
	}

	scanf("%d", &t);

	for (i=0; i<t; i++) {
		//scanf("%c %d %c %d", &p, &x, &q, &y);
		
		scanf("%c", &p);
		scanf("%d", &x);
		scanf("%c", &q);
		scanf("%d", &y);
		//printf("%c %c\n", p, q);
		//printf("%d %d\n\n", x, y);
		
		//p -= 'A';
		//q -= 'A';
		
		p = 0;
		q = 1;

		int temp = a[p][x-1];
		a[p][x-1] = a[q][y-1];
		a[q][y-1] = temp;
	}

	for (i=0; i<2; i++) {
		for (int j = 0; j<n; j++) {
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}


	return 0;
}

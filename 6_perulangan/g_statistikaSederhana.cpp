#include "stdio.h"
#include <cstdio>

int main(){
	int n, x, min = 100000, max = -100000, i=0;

	scanf("%d", &n);

	for(i=0; i<n; i++) {
		x=0;
		scanf("%d", &x);

		if (x>=max) {
			max = x;
		}

		if (x<=min) {
			min = x;
		}
	}

	printf("%d %d", max, min);
	return 0;
}

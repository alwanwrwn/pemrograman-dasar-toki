#include "stdio.h"
#include <cstdio>

int main() {
	int a[1000], n, sum = 0;

	scanf("%d", &n);

	for (int i=0; i<n; i++) {
		scanf("%d", &a[i]);
		sum += a[i];
	}

	printf("%d", sum);

	return 0;
}

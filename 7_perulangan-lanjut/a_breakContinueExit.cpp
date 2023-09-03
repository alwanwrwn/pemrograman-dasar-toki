#include "stdio.h"
#include <cstdio>

int main(){
	int n;
	scanf("%d", &n);

	for (int i=1; i<=n; i++) {
		if (i==42) {
			printf("ERROR");
			break;
		}
		if (i%10==0) {
			continue;
		}
		printf("%d\n", i);
	}

	return 0;
}

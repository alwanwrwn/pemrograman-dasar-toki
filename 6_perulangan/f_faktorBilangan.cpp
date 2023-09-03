#include "stdio.h"
#include <cstdio>

int main(){
	int n, i=0;

	scanf("%d", &n);

	i = n;

	while (i!=0) {
		if (n%i == 0) {
			printf("%d\n", i);
		}
		i--;
	}

	return 0;
}

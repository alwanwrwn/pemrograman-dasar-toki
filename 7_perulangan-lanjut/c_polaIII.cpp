#include "stdio.h"
#include <cstdio>

int main(){
	int i,j,n,num=0;

	scanf("%d", &n);

	for (i=1; i<=n; i++) {
		for (j=1; j<=i; j++) {
			if (num > 9) {
				num = 0;
			}

			printf("%d", num);
			num++;
		}
		printf("\n");
	}

	return 0;
}

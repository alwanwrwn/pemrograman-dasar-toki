#include "stdio.h"
#include <cstdio>

int main(){
	int i,j,x,y, n[100][100];

	scanf("%d %d", &x,&y);
	for (i=0; i<x; i++) {
		for (j=0; j<y; j++) {
			scanf("%d", &n[i][j]);	
		}	
	}

	for (i=0; i<y; i++) {
		for (j=(x-1); j>=0; --j) {
			printf("%d ", n[j][i]);	
		}
		printf("\n");
	}

	return 0;
}

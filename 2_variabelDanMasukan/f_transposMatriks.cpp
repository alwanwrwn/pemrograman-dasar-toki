#include "stdio.h"
#include <cstdio>

int main(){
	int x[3][3];
	int i,j;

	for (i=0; i<3; i++) {
		for (j=0; j<3; j++) {
			scanf("%d", &x[i][j]);
		}
	}
	
	for (i=0; i<3; i++) {
		for (j=0; j<3; j++) {
			printf("%d ", x[j][i]);
		}
		printf("\n");
	}

	return 0;
}

#include "stdio.h"
#include <cstdio>

int main(){
	int n,m,p;

	scanf("%d %d %d", &n, &m, &p);

	int arr1[n][m], arr2[m][p], res[n][p];

	int i,j;

	for (i=0; i<n; i++) {
		for (j=0; j<m; j++) {
			scanf("%d", &arr1[i][j]);
		}
	}

	for (i=0; i<m; i++) {
		for (j=0; j<p; j++) {
			scanf("%d", &arr2[i][j]);
		}
	}


	for (i=0; i<n; i++) {
		for (j=0; j<p; j++) {
			int sum = 0;
			
			for (int k = 0; k<m; k++) {
				sum += arr1[i][k]*arr2[k][j];
			}

			res[i][j] = sum;
		}
	}

	for (i=0; i<n; i++) {
		for (j=0; j<p; j++) {
			printf("%d ", res[i][j]);
		}
		printf("\n");
	}
}

#include <cstdio>

void swap(int &a, int &b){
	int temp = a;
	a = b;
	b = temp;
}

int main(){
	int i,j, n, t, a[2][1001];

	scanf("%d", &n);

	for (i=0; i<2; i++) {
		for (j = 0; j<n; j++) {
			scanf("%d", &a[i][j]);
		}
	}

	scanf("%d", &t);

	for (i=0; i<t; i++) {
		char buff1[1], buff2[1];
		int x,y;

		scanf("%s %d %s %d", buff1, &x, buff2, &y);
		
		int p = buff1[0] - 'A';
		int q = buff2[0] - 'A';
		
		x--;
		y--;

		swap(a[p][x], a[q][y]);
	}

	for (i=0; i<2; i++) {
		for (j = 0; j<n; j++) {
			printf("%d ", a[i][j]);
		}

		printf("\n");
	}

	return 0;
}

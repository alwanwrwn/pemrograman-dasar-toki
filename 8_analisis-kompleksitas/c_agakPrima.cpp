#include "stdio.h"

int main(){
	int i,j,n, num[1000], flag=0;

	scanf("%d", &n);

	for (i=0; i<n; i++) {
		scanf("%d", &num[i]);
	}
	for (i=0; i<n; i++) {
		flag = 0;

		for (j=1; j*j<=num[i]; j++) {
			if (num[i]%j==0) {
				if (j==(num[i]/j)) {
					flag++;
				} else {
					flag+=2;
				}	
			}		
		}

		if (flag<=4) {
			printf("YA\n");
		} else {
			printf("BUKAN\n");
		}
	}

	return 0;
}

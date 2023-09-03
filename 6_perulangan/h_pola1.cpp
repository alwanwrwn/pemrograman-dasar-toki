#include "stdio.h"
#include <cstdio>

int main(){
	int n, k, i = 0;

	scanf("%d %d", &n, &k);

	for(i=1; i<=n; i++) {	
		if(i%k == 0){
			printf("* ");
		} else {
			printf("%d ", i);
		}
	}

	return 0;
}

#include "stdio.h"
#include <cstdio>

int main(){
	int i = 0, n[100];

//	for (i=0; i<100; i++) {
//		scanf("%d", &n[i]);	
//	}

	while (scanf("%d", &n[i]) != EOF) {
		i++;
	}


	for (i = i-1; i>=0; i--) {
		printf("%d\n", n[i]);
	}

	return 0;
}

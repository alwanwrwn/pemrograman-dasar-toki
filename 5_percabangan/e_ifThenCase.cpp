#include "stdio.h"
#include <cstdio>

int main(){
	int n;
	
	scanf("%d", &n);

	if (n>=10000) {
		printf("puluhribuan");
	} else if (n>=1000) {
		printf("ribuan");
	} else if (n>=100) {
		printf("ratusan");	
	} else if (n>=10) {
		printf("puluhan");	
	} else {
		printf("satuan");
	}

	return 0;
}

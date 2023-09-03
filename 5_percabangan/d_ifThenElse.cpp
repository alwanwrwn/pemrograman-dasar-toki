#include "stdio.h"
#include <cstdio>

int main(){
	int a;
	scanf("%d", &a);
	if (a>0) {
		printf("positif");
	} else if (a<0) {
		printf("negatif");
	} else {
		printf("nol");
	}

	return 0;
}

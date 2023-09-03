#include "stdio.h"
#include <cstdio>

int main(){
	int a=0;
	int b=0;

	scanf("%d", &a);
	scanf("%d", &b);

	int res = (int) a/b;
	int sisa = (int) a%b;

	printf("masing-masing %d\n", res);
	printf("bersisa %d", sisa);

	return 0;
}

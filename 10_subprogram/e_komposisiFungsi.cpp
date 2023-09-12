#include "stdio.h"
#include "stdlib.h"
#include <cstdio>
#include <sys/resource.h>

int function(int a, int b, int x){
	return abs( a *x + b);
}

int main(){
	int a,b,k,x;

	scanf("%d %d %d %d", &a, &b, &k, &x);

	int res= x;

	for (int i = 0; i<k; i++) {
		res = function(a, b, res);
	}

	printf("%d", res);

	return 0;
}

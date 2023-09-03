#include "stdio.h"
#include <cmath>
#include <cstdio>

int main(){
	double n;
	long int x;
	scanf("%lf", &n);

	if (n == trunc(n)) {
		printf("%.0lf %.0lf", trunc(n), trunc(n));
	}else if(n > 0){
		x = trunc(n);
		printf("%ld %ld", x, x+1);
	} else if (n < 0) {
		x = trunc(n);
		printf("%ld %ld", x-1, x);
	}
	
	return 0;
}

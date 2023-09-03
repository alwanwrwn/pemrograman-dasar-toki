#include "stdio.h"
#include <cstdio>

int main(){
	short a,t;

	scanf("%hd %hd", &a,&t);

	float res = (float) 0.5 * a * t;

	printf("%.2f", res);

	return 0;
}

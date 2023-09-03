#include "stdio.h"
#include <cstdio>

int main() {
	int x1,y1,x2,y2;

	scanf("%d %d %d %d", &x1,&y1,&x2,&y2);

	int distance = 0;

	if ((x1-x2) < 0) {
		distance += -1*(x1-x2);
	} else {
		distance += x1-x2;
	}

	if ((y1-y2) < 0){
		distance += -1*(y1-y2);
	} else {
		distance += y1-y2;
	}

	printf("%d", distance);

	return 0;
}

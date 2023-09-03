#include "stdio.h"
#include "math.h"

int main() {
	int n;

	scanf("%d", &n);

	for (int i =0; i<=16; i++) {
		if (n == pow(2,i)) {
			printf("ya");
			return 0;
		}
	}

	printf("bukan");
	return 0;
}

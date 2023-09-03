#include "stdio.h"
#include <cstdio>

int main() {
	char kalimat[100];

	while (scanf("%s", kalimat) != EOF) {
		printf("%s\n", kalimat);
	}

	return 0;
}

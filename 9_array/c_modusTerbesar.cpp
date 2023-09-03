#include "stdio.h"
#include <stdlib.h>

int cmpfunc (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}

int main(){
	int n,i,bil;
	
	scanf("%d", &n);

	int *arr2 = (int *)calloc(1001, sizeof(int));

	for (i=0; i<n; i++) {
		scanf("%d", &bil);
		arr2[bil]++;
	}

	int max = 0;
	int val;
	for (i=1; i<=1000; i++) {
		if(max <= arr2[i]){
			max = arr2[i];
			val = i;
		}
	}

	printf("%d", val);
	return 0;
}

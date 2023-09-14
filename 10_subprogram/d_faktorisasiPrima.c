#include "stdio.h"
#include "math.h"

void sieve(int n, int *ar){
	int i;
	
	for (i = 2; i<=n; i++) {
		ar[i] = 1;
	}
	
	for (i=2; i*i<=n; i++) {
		if (ar[i] == 1) {
			int j = 0;
			int counter = 1;
			for (j=i*i; j<n; j += i) {
				ar[j] = 0;
				counter++;
			}
		}
	}
}

int isPrime(int n){
	int i, flag = 0;
	
	for (i=1; i*i<=n; ++i) {
		if (n%i == 0) {
			int x = i;
			int y = n/i;

			if (x==y) {
				flag++;
			} else {
				flag += 2;
			}
		}
	}

	if (flag == 2) {
		return 1;
	} else {
		return 0;
	}
}

int findDegree(int n, int p){
	int degree = 0;

	while (n%p == 0) {
		n /= p;
		degree++;
	}

	return degree;
}

int main(){
	int i,j,n, flag;

	scanf("%d", &n);

//	for (i=2; i<=n; i++) {
//		if (isPrime(i) == 1) {
//			if (n%i == 0) {
//				int degree = findDegree(n, i);
//
//				n = n/pow(i, degree);
//
//				if (degree == 1) {
//					printf("%d", i);
//				} else {
//					printf("%d^%d", i, degree);
//				}
//
//				if (n != 1) {
//					printf(" x ");
//				} else {
//					break;
//				}
//			}	
//		}
//	}
//

	int ar[1000001];

	sieve(n, ar);

	//for (i=2; i<n; i++) {
	//	printf("%d %d\n",i, ar[i]);
	//}

	for (i=2; i<=n; i++) {
		if (ar[i] == 1) {
			if (n%i == 0) {
				int degree = findDegree(n, i);
				
				n = n/pow(i, degree);
				
				if (degree == 1) {
					printf("%d", i);
				} else {
					printf("%d^%d", i, degree);
				}

				if (n != 1) {
					printf(" x ");
				} else {
					break;
				}
			}	
		}
	}
	
	return 0;
}

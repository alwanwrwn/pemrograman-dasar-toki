#include <iostream>

using namespace std;

int main(){
	int n, k, i; cin>>n>>k;

	for (i = 1; i<=n; i++) {
		for (int j = 1; j<=k; ) {
			for (int p = i+1; p<=n; p++) {
				cout<<i<<" "<<p;
			}
		}	
	}

	return 0;
}

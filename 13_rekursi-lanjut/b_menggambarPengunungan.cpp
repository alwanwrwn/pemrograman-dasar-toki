#include <iostream>

using namespace std;

int ind = 0;

void gunung(int n){
	if (n==0) {

	} else {
		gunung(n-1);
		for (int i=0; i<n; i++) {
			cout<<"*";
		}
		cout<<"\n";
		gunung(n-1);
	}
}

int main(){
	int n; cin>>n;

	gunung(n);
	return 0;
}

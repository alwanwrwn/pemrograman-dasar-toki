#include <cstdlib>
#include <iostream>

using namespace std;

int formula (int a, int b,int k,int x){
	int ans = abs(a*x+b);

	if (k==1) {
		return ans;
	}

	return formula(a, b, k-1, ans);
}

int main(){
	int a,b,k,x;

	cin>>a>>b>>k>>x;

	cout<<formula(a,b,k,x);

	return 0;
}

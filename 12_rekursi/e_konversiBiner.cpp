#include <iostream>
#include <string>

using namespace std;

string convertBiner(string s, int n){
	if (n==0) {
		return s;
	} else {
		if (n%2 == 0) {
			s.insert(0,"0");
		}else {
			s.insert(0, "1");
		}
		return convertBiner(s, n/2);
	}
}

int main(){
	string s="";
	int n; cin>>n;

	cout<<convertBiner(s, n);
	return 0;
}

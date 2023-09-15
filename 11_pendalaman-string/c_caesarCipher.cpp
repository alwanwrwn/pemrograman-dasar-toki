#include <iostream>
#include <string>

using namespace std;

int main(){
	string s;
	int k,i;

	cin>>s>>k;

	for (i=0; i<s.length(); i++) {
		int num = s[i] - 'a';
		int enc = (num + k) % 26;
		s[i] = enc + 'a';
	}

	cout<<s;

	return 0;
}

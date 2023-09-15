#include <iostream>
#include <string>

using namespace std;

int main(){
	string s,t;
	cin>>s>>t;

	int i = s.find(t), len = t.length();

	while (i>=0) {
		s.erase(i,len);
		i = s.find(t);
	}

	cout<<s;

	return 0;
}

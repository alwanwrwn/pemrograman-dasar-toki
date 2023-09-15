#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

string palindrom(string s, int start,int end){
	cout<<s[start]<<start<<"   "<<s[end]<<end<<"\n";
	
	if (start-end == 0 || start-end == 1) {
		return "YA";
		exit;
	}

	if(s[start] == s[end]){
		if (start == end) {
			return "YA";
		} else {	
			palindrom(s, start+1, end-1);
		}
	}
	return "BUKAN";
}

int main(){
	string s; cin>>s;

	cout<<palindrom(s, 0, s.length()-1);
	
	return 0;
}

#include <iostream>
#include <string>

using namespace std;

void palindrom(string s, int index){
	int length = s.length()-1;
	
	if (s[index] == s[length-index]) {
		if (index == length-index || index - (length-index) == -1) {
			cout<<"YA";
		} else {
			palindrom(s, index+1);
		}
	} else {
		cout<<"BUKAN";
	}
}

int main(){
	string s; cin>>s;

	palindrom(s, 0);

	return 0;
}

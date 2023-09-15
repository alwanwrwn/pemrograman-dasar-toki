#include <iostream>
#include <string>

using namespace std;

int main(){
	string s;

	int i,flag;
	cin>>s;

	for (int x = 0; x<s.length(); x++) {
		if (s[x] == '_') {
			flag = 1;
			i = x;
			break;
		} else {
			i = 0;
			flag = 0;
		}
	}
	if (flag == 1){
		for (int j = i; j<s.length(); j++) {
			if (s[j] == '_') {
				s[j+1]= toupper(s[j+1]);
				s.erase(j, 1);
			}
		}
	} else {
		for (int j = 0; j<s.length(); j++) {
			if (isupper(s[j])) {
				s[j] = tolower(s[j]);
				s.insert(j, "_");
			}
		}
	}
			

	cout<<s;

	return 0;
}

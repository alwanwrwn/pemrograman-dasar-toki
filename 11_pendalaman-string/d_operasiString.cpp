#include <iostream>
#include <string>

using namespace std;

int main(){
	string s1,s2,s3,s4;

	cin>>s1>>s2>>s3>>s4;

	int i = s1.find(s2);

	s1.erase(i, s2.length());
	
	i = s1.find(s3);

	s1.insert(i+s3.length(), s4);

	cout<<s1;

	return 0;
}

#include<iostream>
using namespace std;
int main () {
	int n;
	cin>>n;
	string s=to_string(n);
	for(int i=0;i<s.size();i++){
		if (s[i]=='0'){
			s[i]='5';
		}
	}
	int number=stoi(s);
	cout<<number;
	return 0;
}
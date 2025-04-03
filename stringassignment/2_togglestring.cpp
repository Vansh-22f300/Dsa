// Take as input S, a string. Write a function that toggles the case of all characters in the string. Print the value returned.


// Input Format
// String


// Constraints
// Length of string should be between 1 to 1000.


// Output Format
// String


// Sample Input
// abC
// Sample Output
// ABc



#include<iostream>
#include<string>
#include<cctype>
using namespace std;
string Togglecase(string S){
	for(int i=0;i<S.length();i++){
		if (isupper(S[i])) {
            S[i] = tolower(S[i]);
        } 
		else if (islower(S[i])) {
            S[i] = toupper(S[i]);
        }
    }
	return S;
}
int main() {
	string s;
	cin>>s;
	cout<<Togglecase(s);
	return 0;
}
// Take as input S, a string. Write a program that inserts between each pair of characters the difference between their ascii codes and print the ans.

// Constraints
// Length of String should be between 2 to 1000.

// Sample Input
// acb
// Sample Output
// a2c-1b
// Explanation::For the sample case, the Ascii code of a=97 and c=99 ,the difference between c and a is 2.Similarly ,the Ascii code of b=98 and c=99 and their difference is -1. So the ans is a2c-1b.
#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    
    string result;
    for (int i = 0; i < s.length() - 1; i++) {          ///upto second last char because b ke baad kuch nhi hai to differnece aa jayge uska bhi
        result += s[i];
        result += to_string(s[i + 1] - s[i]);
    }
	cout<<result<<s[s.length()-1];

	///or 
	// for(int i=0;i<s.length();i++){
    //     cout<<s[i];
    //     if(s[i+1]!=0)cout<<s[i+1]-s[i];
    // }
}
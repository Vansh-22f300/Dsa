#include <bits/stdc++.h>
using namespace std;

string compress(string s) {
    string output = "";
    int count = 1;
    for (int i = 1; i <= s.length(); i++) {
        if (s[i] == s[i-1]) {
            count++;
        } else {
            output += s[i-1];
            output += to_string(count);
            count = 1;
        }
    }
    return output.length() < s.length() ? output : s;
}

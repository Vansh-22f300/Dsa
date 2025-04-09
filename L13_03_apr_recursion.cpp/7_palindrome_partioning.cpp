#include<bits/stdc++.h>
using namespace std;

bool ispalindrome(string s){
    int i=0;
    int j=s.size()-1;
    while(i<j){
        if(s[i]!=s[j]) return false;
        i++;
    j--;
    }
    return true;
    
}
void palindromepartioning(string s, vector<string> &op){
    //base case
    if(s.size()==0){
        for(int i=0;i<op.size();i++){
            cout<<op[i]<<" ";
        }
        cout<<endl;
        return;
    }

    //recursive casee
    for(int i=1;i<=s.size();i++){
        string iWillDo=s.substr(0,i);
        string RecWillDo=s.substr(i);
        if(ispalindrome(iWillDo)){
            op.push_back(iWillDo);
            palindromepartioning(RecWillDo,op);
            op.pop_back();
        }
    }
}

int main(){
    string s="aaba";
    vector<string> op;
    palindromepartioning(s,op);
}
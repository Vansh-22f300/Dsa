#include <iostream>
using namespace std;
int main()
{   string S;
    cin>>S;
    int count[10005]={0};
    for(int i=0;i<S.length();i++){
        char ch=S[i];
        count[ch]++;
        // cout<<count[i];
    }
    for(int i=0;i<S.length();i++){
        if(count[S[i]]>0){
            cout<<S[i]<<count[S[i]];
            count[S[i]]=0;
        }
    }

   

    return 0;
}

//sliding window

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int solve(int n, vector<int>& p) {
    sort(p.begin(), p.end());
    int j=0;
    int ans=n;
    for(int i=0;i<n;i++){
        while(j<n && p[j]-p[i]<=n-1){
            j++;
        }
        int cnt=n-(j-i);
        ans=min(ans,cnt);
    }
    return ans;
}

int main() {
    int n;
    cin >> n;
    vector<int> p(n);
    for (int i = 0; i < n; i++) {
        cin >> p[i];
    }

    cout << solve(n, p) << endl;
    return 0;
}

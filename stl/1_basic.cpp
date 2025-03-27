#include <bits/stdc++.h>
#include <vector>
using namespace std;

void explainpair() {
    pair<int, int> p = {2, 3};
    cout << p.first << " " << p.second << endl;
    pair<int, float> q = {4, 5.5};
    cout << q.first << " " << q.second << endl;
    pair<int, pair<int, int>> r = {5, {6, 7}};
    cout << r.first << " " << r.second.first << " " << r.second.second << endl;
}

void explainvector() {
    vector<int> vec;
    vec.push_back(1);  // {1}
    vec.emplace_back(2);  // {1, 2}

    vector<int> vec1(5, 100);  // {100, 100, 100, 100, 100}

    vector<int> vec2(5);  // {0, 0, 0, 0, 0}

    vector<int> vec3(vec2);  // copy vec2 to vec3  // {0, 0, 0, 0, 0}

    // Print vec
    cout << "vec: ";
    for (int i : vec) {
        cout << i << " ";
    }
    cout << endl;

    // Print vec1
    cout << "vec1: ";
    for (int i : vec1) {
        cout << i << " ";
    }
    cout << endl;

    // Print vec2
    cout << "vec2: ";
    for (int i : vec2) {
        cout << i << " ";
    }
    cout << endl;

    // Print vec3
    cout << "vec3: ";
    for (int i : vec3) {
        cout << i << " ";
    }
    cout << endl;
    cout << "vec3: ";

    for(auto i=vec3.begin();i<vec3.end();i++){
        cout<<*i<<" ";
    }
    cout<<endl;
    vec1.erase(vec1.begin()+0,vec1.begin()+5);
    cout<<"vec1: ";
    for(int i:vec1){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"vec2: ";
    for(auto i=vec2.begin();i<vec2.end();i++){
        cin>>*i;
    }
    cout<<"vec2: ";
    for(int i:vec2){
        cout<<i<<" ";
    }
    for (int i = 0; i < vec1.size(); ++i) {
        cin >> vec1[i];
    }
    cout<<"vec1: ";
    for(int i:vec1){
        cout<<i<<" ";
    }
}

int main() {
    // explainpair();
    explainvector();
    return 0;
}
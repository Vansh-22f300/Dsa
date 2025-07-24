#include<iostream>
#include<unordered_map>
#include<map>
using namespace std;
int main(){

    // unordered_map<string,int> h;
    map<string,int> h;       //map always give sorted order in form of keys

    //Insertion
    pair<string, int> p;
    p.first = "xyz";
    p.second = 100;
    h.insert(p);
    // h.insert({"abc", 10});
    h.insert({"def", 20});
    h.insert({"ghi", 30});
    h.insert(make_pair("jkl", 40));
    h.insert({"mno", 50});

    //printing Hashmaps

    // for(int i=0;i<h.bucket_count();i++){
    //     cout<<i<<" : ";
    //     for(auto it=h.begin(i);it!=h.end(i);it++){
    //         cout<<"("<<it->first<<", "<<it->second<<") ";
    //     }
    //     cout<<"\n";
    // }

    for(auto p:h){
        cout<<p.first<<" : "<<p.second<<"\n";
    }

}
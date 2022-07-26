//
// Created by Hady Ahmed on 7/13/2022.
//
#include <iostream>
#include <string>
#include <algorithm>
#include <map>
#include <set>
#include <vector>
#include <stack>
#include <cmath>
#include <queue>
#define improve ios_base::sync_with_stdio(false); cin.tie(0), cout.tie(0);
#define all(v) v.begin(), v.end()
#define loop(n) for (int i = 0; i < n; i++)
#define ll long long int
#define modl 1000000007
#define reb(i, k, n) for (ll i = k; i < n; i++)
using namespace std;

void Sinking_Ship(){

    map<string, vector<string>> res;
    int n; cin>>n;
    for (int i = 0; i < n; ++i) {
        string val,key;
        cin>>val>>key;
        if(key == "child" )
            key = "woman";
        if(res.find(key)==res.end())
        {
            vector<string> tmp;
            tmp.push_back(val);
            res.insert({key,tmp});
        }else{
            res[key].push_back(val);
        }
    }
    if(res.find("rat")!=res.end())
        for(auto it: res["rat"])
            cout<<it<<endl;
    if(res.find("woman")!=res.end())
        for(auto it: res["woman"])
            cout<<it<<endl;
    if(res.find("man")!=res.end())
        for(auto it: res["man"])
            cout<<it<<endl;
    if(res.find("captain")!=res.end())
        for(auto it: res["captain"])
            cout<<it<<endl;

}


//int main(){
//
//    improve
//    Sinking_Ship();
//    return 0;
//}

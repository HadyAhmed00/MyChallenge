//
// Created by Hady Ahmed on 7/30/2022.
//
/*
██████╗  █████╗ ██╗   ██╗     ██╗ ██╗ ██████╗  ██╗
██╔══██╗██╔══██╗╚██╗ ██╔╝    ████████╗╚════██╗███║
██║  ██║███████║ ╚████╔╝     ╚██╔═██╔╝ █████╔╝╚██║
██║  ██║██╔══██║  ╚██╔╝      ████████╗ ╚═══██╗ ██║
██████╔╝██║  ██║   ██║       ╚██╔═██╔╝██████╔╝ ██║
╚═════╝ ╚═╝  ╚═╝   ╚═╝        ╚═╝ ╚═╝ ╚═════╝  ╚═╝

*/
#include <iostream>
#include <string>
#include <algorithm>
#include <map>
#include <set>
#include <vector>
#include <stack>
#include <cmath>
#include <queue>
#include <utility>
#include <cstring>
#define improve ios_base::sync_with_stdio(false); cin.tie(0), cout.tie(0);
#define all(v) v.begin(), v.end()
#define loop(n) for (int i = 0; i < n; i++)
#define ll long long int
#define END cout<<endl;
#define reb(i, k, n) for (ll i = k; i < n; i++)
using namespace std;
bool isSup(string a,string b){
    //O(Nlog(N)) give a TLE ; But It works fine with the smale inputs
    if(a.size()<b.size())
        return false;

    sort (all(a));
    sort(all(b));
    int i =0;
    for (int j = 0; j < a.size(); ++j) {
        if(a[j]==b[i]){
            while(a[j]==b[i]&&i<b.size()&&j<a.size()){
                i++;j++;
            }
            if(i== b.size())
                return true;
        }
    }
    return false;

}
vector<int> freq(string s){
    vector<int> res (26,0);
    for (int i = 0; i < s.size(); ++i) {
        res[s[i]-'a']++;
    }
    return res;
}
vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
    vector<string> res;
    vector<int> bFreq (26,INT_MIN);
    for (auto & i : words2) {
        vector<int> tmp = freq(i);
        for (int j = 0; j < 26; ++j){
            bFreq[j] = max(bFreq[j], tmp[j]);
        }
    }
    for (auto & i : words1) {
        bool sup = true;
        vector<int> otherTmp = freq(i);
        for (int j = 0; j < 26; ++j) {
            if(bFreq[j]>otherTmp[j])
            {
                sup = false;
                break;
            }
        }
        if(sup) res.push_back(i);
    }
    return res;
}
//int main(){
//    improve
//
//
//    END
//    return 0;
//}

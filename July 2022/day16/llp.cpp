//
// Created by Hady Ahmed on 7/14/2022.
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
#define END cout<<endl;
#define reb(i, k, n) for (ll i = k; i < n; i++)
using namespace std;
void LLPS(){
    string res;
    int max_val = INT_MIN;
    string s; cin>>s;
    for (int i = 0; i < s.size(); ++i) {
        max_val=max(max_val,(int)s[i]);
    }
    for (int i = 0; i < s.size(); ++i) {
        if(s[i]==max_val)
            res.push_back(s[i]);
    }
    cout<<res;


}
//
//int main(){
//
//    improve
//    LLPS();
//    END
//    return 0;
//}

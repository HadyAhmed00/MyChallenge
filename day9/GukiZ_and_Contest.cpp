//
// Created by Hady Ahmed on 7/7/2022.
//
#include <iostream>
#include <string>
#include <algorithm>
#include <map>
#include <set>
#include <vector >
#include <stack>
#define ll long long
#define modl 1000000007
#define reb(i, k, n) for (ll i = k; i < n; i++)

using namespace std;

void GukiZ_and_Contest(){
    int n;cin>>n;
    vector<int> rates;
    vector<int> sorted_rates;
    for (int i = 0; i < n; ++i) {
        int tmp ;
        cin>>tmp;
        rates.push_back(tmp);
        sorted_rates.push_back(tmp);
    }
    sort(sorted_rates.begin(),sorted_rates.end(),greater<int>());
    int count=1,rate=1,curr=sorted_rates[0];
    map<int,int> res;
    res.insert(make_pair(sorted_rates[0],rate));
    for (int i = 1; i < sorted_rates.size(); ++i) {
        if(sorted_rates[i]==curr)
        {
            count++;
        }else{
            curr = sorted_rates[i];
            rate = count+rate;
            count=1;
            res.insert(make_pair(sorted_rates[i],rate));
        }
    }
    for (int i = 0; i < n; ++i) {
        cout<<res[rates[i]]<<" ";
    }
}

//
//int main(){
//    GukiZ_and_Contest();
//    return 0;
//}

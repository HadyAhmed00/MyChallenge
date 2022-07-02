//
// Created by Hady Ahmed on 7/2/2022.
//
#include <iostream>
#include <string>
#include <algorithm>
#include <map>
#include <set>
#include <vector >
#define ll long long
#define modl 1000000007
#define f(i, k, n) for (ll i = k; i < n; i++)
using namespace std;

int maxArea(int h, int w, vector<int>& horizontalCuts, vector<int>& verticalCuts) {


    horizontalCuts.push_back(h);
    horizontalCuts.push_back(0);
    sort(horizontalCuts.begin(),horizontalCuts.end());
    ll maxh = INT_MIN;

    for (int i = 0; i < horizontalCuts.size()-1; ++i) {
        maxh= max(maxh,(ll)(horizontalCuts[i+1]-horizontalCuts[i]));
    }
    verticalCuts.push_back(w);
    verticalCuts.push_back(0);
    sort(verticalCuts.begin(),verticalCuts.end());
    ll maxw = INT_MIN;
    for (int i = 0; i < verticalCuts.size()-1; ++i) {
        maxw = max(maxw,(ll)(verticalCuts[i+1]-verticalCuts[i]));
    }

    ll res = (maxw*maxh) ;
    return res% 1000000007;
}
//
//int main() {
////    1000000000
////    1000000000
////    [2]
////    [2]
//    vector<int> h = {2};
//    vector<int> w   = {2};
//    cout<<maxArea(1000000000,1000000000,h ,w);
//    return 0;
//}

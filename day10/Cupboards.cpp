//
// Created by Hady Ahmed on 7/8/2022.
//
#include <iostream>
#include <string>
#include <algorithm>
#include <map>
#include <set>
#include <vector >
#include <stack>
#include <cmath>
#define ll long long
#define modl 1000000007
#define reb(i, k, n) for (ll i = k; i < n; i++)
using namespace std;

void Cupboards(){
    int n; cin>>n;
    int rones=0,rzeros=0;
    int lones=0,lzeros=0;
    for (int i = 0; i < n; ++i) {
        int a ,b;
        cin>>a>>b;
        a==1?rones++:rzeros++;
        b==1?lones++:lzeros++;
    }
    cout<<min(rones,rzeros)+ min(lones,lzeros);
}

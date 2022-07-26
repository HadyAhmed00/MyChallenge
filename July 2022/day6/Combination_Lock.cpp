//
// Created by Hady Ahmed on 7/4/2022.
//
#include <iostream>
#include <string>
#include <algorithm>
#include <map>
#include <set>
#include <vector>
#define ll long long
#define modl 1000000007
#define f(i, k, n) for (ll i = k; i < n; i++)
using namespace std;

void Combination_Lock(){
    int n;
    string a,b;
    cin>>n>>a>>b;
    ll total=0;
    for (int i = 0; i < n; ++i) {
        int me ,aim;
        aim= a[i] - '0';
        me = b[i] -'0';
        int diff =abs(me-aim);
        total+= min(diff,10-diff);
    }

    cout<<total;
}
//
//int main() {
//    Combination_Lock();
//}

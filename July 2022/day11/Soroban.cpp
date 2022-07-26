//
// Created by Hady Ahmed on 7/9/2022.
//
#include<bits/stdc++.h>
#define ll long long
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define show cerr<<"*\n"
#define int ll
using namespace std;
void solve() {
    int n;
    cin >> n;
    if(n==0)
        cout<<"O-|-OOOO"<<'\n';
    while(n>0) {
        int cur=n%10;
        n/=10;
        string h="OOOOO";
        if(cur<5)
        {
            h[cur%5]='-';
            cout <<"O-|"<<h<<'\n';
        }
        else {
            h[cur%5]='-';
            cout<<"-O|"<<h<<'\n';
        }
    }
}
//
//signed main() {
//    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie();
//    int T=1;
////    cin >> T;
//    while(T--)
//        solve();
//}
//
// Created by Hady Ahmed on 7/3/2022.
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
void Mashmokh_and_Tokens(){

    int n , a ,b ;
    cin>>n>>a>>b;
    for (int i = 0; i < n; ++i) {
        ll tmp;
        cin>>tmp;
        ll x = (tmp*a);
        ll res = x%b;
        ll res_res = res/a;
        cout<<res_res<<" ";
    }
}
//
//int main() {
//    Mashmokh_and_Tokens();
//
//    return 0;
//}

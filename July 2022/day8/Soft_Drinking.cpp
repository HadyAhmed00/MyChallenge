//
// Created by Hady Ahmed on 7/6/2022.
//
#include <iostream>
#include <string>
#include <algorithm>
#include <map>
#include <set>
#include <vector>
#include <stack>
#define ll long long
#define modl 1000000007
#define f(i, k, n) for (ll i = k; i < n; i++)
using namespace std;

void Soft_Drinking(){
    int n, k, l, c, d, p, nl, np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int shots1 = (k*l)/nl;
    int shots2  = (c*d);
    int shots3  = p/np;
    int real = min(shots1,min(shots2,shots3));
    cout<<real/n;
}

//int main(){
//    Soft_Drinking();
//    return 0;
//}

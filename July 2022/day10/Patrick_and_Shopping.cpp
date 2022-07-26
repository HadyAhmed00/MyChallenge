//
// Created by Hady Ahmed on 7/8/2022.
//
#include <iostream>
#include <string>
#include <algorithm>
#include <map>
#include <set>
#include <vector>
#include <stack>
#include <cmath>
#define ll long long
#define modl 1000000007
#define reb(i, k, n) for (ll i = k; i < n; i++)
using namespace std;
void Patrick_and_Shopping(){
    ll a ,b ,c;
    cin>>a>>b>>c;
    ll a1=a+c+b;
    ll a2=a+c+c+a;
    ll a3=b+b+a+a;
    ll a4=b+c+c+b;
    cout<<min(a1,min(a2,min(a3,a4)));
}
//int main(){
//    Patrick_and_Shopping();
//    return 0;
//}

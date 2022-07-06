//
// Created by Hady Ahmed on 7/6/2022.
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
#define f(i, k, n) for (ll i = k; i < n; i++)
using namespace std;

void Summer_Camp(){
    string arr[1001];
    string s = "";
    for (int i = 1; i < 1001; ++i) {
//        arr[i]=to_string(i);
        s+= to_string(i);
    }
    int n;
    cin>>n;
    cout<<s[n-1];

}
//int main(){
//    Summer_Camp();
//    return 0;
//}

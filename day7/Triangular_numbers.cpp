//
// Created by Hady Ahmed on 7/5/2022.
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
void Triangular_numbers(){
    int n;cin>>n;
    if(n==1|| n==0)
    {
        cout<<"YES";
        return;
    }
    for (int i = 1; i < n; ++i) {
        int a = (i*(i+1))/2;
        if(a==n)
        {
            cout<<"YES";
            return;
        }
    }
    cout<<"NO";

}
//int main() {
//    Triangular_numbers();
//    return 0;
//}

//
// Created by Hady Ahmed on 7/7/2022.
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
#define reb(i, k, n) for (ll i = k; i < n; i++)
using namespace std;
vector<int> countBits(int n) {

    vector<int>res ;
    for (int i = 0; i <= n; ++i) {
        int a  =0;
        int x = i;
        while (x){
            x%2!=0?a++:a=a;
            x/=2;
        }
        res.push_back(a);
    }

    for (auto it : res)
        cout<< it<<" ";
    return res ;
}

//
//int main(){
//    countBits(2);
//    return 0;
//}

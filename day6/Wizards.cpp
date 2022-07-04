//
// Created by Hady Ahmed on 7/4/2022.
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
void Wizards(){
    float  n, p,q;
    cin>>n;
    cin>>p>>q;

    cout<< p*(n/(p+q));
}
//int main() {
//    Wizards();
//}

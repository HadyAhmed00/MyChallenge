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

void Choosing_Teams(){
    int n, k ;
    cin>>n>>k;
    int c=0;

    for (int i = 0; i < n; ++i) {
        int input ;
        cin>>input;
        int tmp =  5-input;
        if(tmp>=k)
            c++;
    }

    cout<<c/3;
}
//
//int main() {
//    Choosing_Teams();
//    return 0;
//}

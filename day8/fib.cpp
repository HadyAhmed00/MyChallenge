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
int fib(int n) {
    if(n==0)
        return 0;
    if(n==1)
        return 1;
    int a = 1,b=1;
    for (int i = 2; i < n; ++i) {
        int fib = a+b;
        a=b;
        b=fib;
    }

    return b;

}

//int main(){
//    cout<<fib(4);
//    return 0;
//}

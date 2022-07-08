//
// Created by Hady Ahmed on 7/8/2022.
//
#include <iostream>
#include <string>
#include <algorithm>
#include <map>
#include <set>
#include <vector >
#include <stack>
#include <cmath>
#define ll long long int
#define modl 1000000007
#define reb(i, k, n) for (ll i = k; i < n; i++)
using namespace std;
double myPow(double x, int n) {
    if(n==0){
        return 1;
    }
    if(n<0){
        x = 1/x;
        n= abs(n);
    }
    double res = myPow(x,n/2);
    double final;
    if(n%2==0)
    {
        final= res*res;
    }else{
        final= res*res*x;
    }
    return final;
}
int main(){

    cout<<myPow(2.00000,-2);
    return 0;
}

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
int mySqrt(int x) {
    if(x==0)
        return 0;
    int start =0,end = x;
    int res=-1;
    while(start<end)
    {
        int mid =(start+end)/2;
        ll squr=mid*mid ;
        if(squr==x){
            return mid;
        }
        else if(squr>x)
        {
            end = mid-1;
        }
        else if(squr<x)
        {
            res = mid;
            start=mid+1;
        }
    }
    return res;

}
//int main(){
//    cout<<mySqrt(8);
//
//    return 0;
//}

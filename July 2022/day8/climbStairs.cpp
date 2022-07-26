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
int climbStairs(int n) {
    int dp[n+1];
    for (int i = 1; i <= n; ++i) {
        if(i==1){
            dp[i]=1 ;
        }else if(i==2){
            dp[i]=2;
        }
        else{
            dp[i]= dp[i-1]+dp[i-2];
        }
    }
    return dp[n];


}

//int main(){
//    cout<<climbStairs(6);
//    return 0;
//}

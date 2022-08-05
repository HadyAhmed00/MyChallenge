//
// Created by Hady Ahmed on 8/5/2022.
//
/*
██╗  ██╗ █████╗ ██████╗ ██╗   ██╗
██║  ██║██╔══██╗██╔══██╗╚██╗ ██╔╝
███████║███████║██║  ██║ ╚████╔╝
██╔══██║██╔══██║██║  ██║  ╚██╔╝
██║  ██║██║  ██║██████╔╝   ██║
╚═╝  ╚═╝╚═╝  ╚═╝╚═════╝    ╚═╝
*/
#include <iostream>
#include <string>
#include <algorithm>
#include <map>
#include <set>
#include <vector >
#include <stack>
#include <cmath>
#include <queue>
#include <utility>
#include <cstring>
#define improve ios_base::sync_with_stdio(false); cin.tie(0), cout.tie(0);
#define all(v) v.begin(), v.end()
#define loop(n) for (int i = 0; i < n; i++)
#define ll long long int
#define END cout<<endl;
#define reb(i, k, n) for (ll i = k; i < n; i++)
using namespace std;
int soloution (vector<int>& nums,int i , vector<int>&dp){
    if(dp[i]!=-1)
        return dp[i];
    if(i==0)
        return 1;
    int conter =0;
    for(auto it:nums){
        if(i>=it)
            conter += soloution(nums,i-it,dp);
    }
    return dp[i]=conter;
}
int combinationSum4(vector<int>& nums, int target) {
    vector<int> dp (target+1,-1);
    return soloution(nums,target,dp);
}
int main(){
    improve
    vector<int> a = {1,2,3};

    int b =combinationSum4(a,4);
    cout<<b;

    END
}

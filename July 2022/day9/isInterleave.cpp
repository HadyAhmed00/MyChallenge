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

bool Interleave_helper(string s1,string s2,string s3, int i, int j ,string res,vector<vector<int>> & dp){
    if(dp[i][j]!=-1)
        return dp[i][j];
    if(res== s3 && i==s1.size() && j==s2.size())
        return dp[i][j]=1;
    int ans = 0;
    if(i<s1.size())
    {
        ans = ans | Interleave_helper(s1,s2,s3,i-1,j,res+s1[i],dp);
    }
    if(j<s2.size()){
        ans = ans | Interleave_helper(s1,s2,s3,i,j-1,res+s2[j],dp);
    }
    return dp[i][j] = ans;


}

bool isInterleave(string s1, string s2, string s3) {
    if (s1.length() + s2.length() != s3.length()) return false;
    if (s1.length() < s2.length()) swap(s1, s2);
    int m = s1.length(), n = s2.length();

    vector<bool> dp(n + 1, false);
    dp[0] = true;
    for (int j = 1; j <= n; j++) {
        dp[j] = s3[j - 1] == s2[j - 1] && dp[j - 1];
    }

    for (int i = 1; i <= m; i++) {
        dp[0] = s3[i - 1] == s1[i - 1] && dp[0];
        for (int j = 1; j <= n; j++) {
            dp[j] = (s3[i + j - 1] == s1[i - 1] && dp[j]);
            dp[j] = dp[j] || (s3[i + j - 1] == s2[j - 1] && dp[j - 1]);
        }
    }
    return dp.back();
}


//int main(){
//    cout<<isInterleave("aabcc","dbbca","aadbbcbcac");
//    return 0;
//}

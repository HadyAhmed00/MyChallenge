//
// Created by Hady Ahmed on 7/12/2022.
//
#include <iostream>
#include <string>
#include <algorithm>
#include <map>
#include <set>
#include <vector>
#include <stack>
#include <cmath>
#include <queue>
#define improve ios_base::sync_with_stdio(false); cin.tie(0), cout.tie(0);
#define all(v) v.begin(), v.end()
#define loop(n) for (int i = 0; i < n; i++)
#define ll long long int
#define modl 1000000007
#define reb(i, k, n) for (ll i = k; i < n; i++)
using namespace std;
int strStr(string haystack, string needle) {
    if(needle.size()>haystack.size())
        return -1;
    for (int i = 0; i < haystack.size(); ++i) {
        if(needle[0]==haystack[i])
        {
            bool f = true;
            for (int j = 0; j < needle.size(); ++j) {
                if(i+j>=haystack.size())
                    return -1;
                if(needle[j]!=haystack[i+j]){
                    f=false;

                }
            }
            if(f)
                return i;
        }
    }
    return -1;
}
//int main(){
//
//    improve
//    string haystack = "hello", needle = "ll";
//    cout<<strStr(haystack,needle);
//    return 0;
//}

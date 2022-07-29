//
// Created by Hady Ahmed on 7/29/2022.
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

int lengthOfLongestSubstring(string s) {
    int Max = INT_MIN;
    set<char> lookUp;
    int set_size=0;
    for(auto it:s){
        lookUp.insert(it);
        if(set_size==lookUp.size()){
            Max = max(Max,set_size);
            lookUp.clear();
            set_size=0;
            lookUp.insert(it);
        }
        else{
            set_size=lookUp.size();
        }
    }
    return max(Max,set_size);

}
//slikdeing window approche

int lengthOfLongestSubstring1(string s){
    map<char,int>mp;
    int i=0,j=0,res=0;
    while(j<s.length()){
        mp[s[j]]++;
        if(mp.size()<j-i+1){
            while(!mp.empty() && mp.size()<j-i+1){
                mp[s[i]]--;
                if(mp[s[i]]==0) mp.erase(s[i]);
                i++;
            }
            j++;
        }else if(mp.size()==j-i+1){
            res=max(res,j-i+1);
            j++;
        }
    }
    return res;
}
//int main(){
//    improve
//    string s="dvdf";
//    cout<<lengthOfLongestSubstring(s);
//    END
//    return 0;
//}

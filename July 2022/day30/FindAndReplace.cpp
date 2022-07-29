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

string create(string input ){
    string res="";
    map<char,char> mp;
    char tmp ='a';
    for (int i = 0; i < input.size(); ++i) {
        if(mp.find(input[i])==mp.end())
        {
            mp.insert({input[i],tmp});
            tmp++;
            res+=mp[input[i]];
        }else{
            res+=mp[input[i]];
        }
    }
    return res;
}

vector<string> findAndReplacePattern(vector<string>& words, string pattern) {

    if(pattern.size()==0){
        return {};
    }
    if(pattern.size()==1){
        return words;
    }
    string myPattern = create(pattern);
    vector<string> res ;
    for (int i = 0; i < words.size(); ++i) {
        if(myPattern== create(words[i]))
            res.push_back(words[i]);
    }
    return res;

}

//
//int main(){
//    improve
//
//    END
//    return 0;
//}

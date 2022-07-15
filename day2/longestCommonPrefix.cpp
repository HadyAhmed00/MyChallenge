//
// Created by Hady Ahmed on 6/30/2022.
//leetcode
/*
██████╗  █████╗ ██╗   ██╗    ██████╗
██╔══██╗██╔══██╗╚██╗ ██╔╝    ╚════██╗
██║  ██║███████║ ╚████╔╝      █████╔╝
██║  ██║██╔══██║  ╚██╔╝      ██╔═══╝
██████╔╝██║  ██║   ██║       ███████╗
╚═════╝ ╚═╝  ╚═╝   ╚═╝       ╚══════╝

 */

#include <iostream>
#include <string>
#include <algorithm>
#include <map>
#include <set>
#include <vector >
#define ll long long
using namespace std;


string longestCommonPrefix(vector<string>& strs) {

    string res ="" ;
    if(strs.size()==0)
        return "";
    int length =INT_MAX;
    for(auto it:strs)
        if(it.size()<length)
            length=it.size();
    for (int i = 0; i < length; ++i) {
        bool ok = true;
        char curr = strs[0][i];
        for (int j = 0; j < strs.size(); ++j) {

            if(strs[j][i]!= curr)
            {
                ok = false;
                break;
            }
        }
        if(ok){
            res.push_back(curr);
        }
        else{
            break;
        }
    }
    return res;
}


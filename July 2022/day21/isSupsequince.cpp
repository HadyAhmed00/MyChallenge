//
// Created by Hady Ahmed on 7/20/2022.
//
/*
██████╗  █████╗ ██╗   ██╗     ██╗ ██╗     ██████╗  ██╗
██╔══██╗██╔══██╗╚██╗ ██╔╝    ████████╗    ╚════██╗███║
██║  ██║███████║ ╚████╔╝     ╚██╔═██╔╝     █████╔╝╚██║
██║  ██║██╔══██║  ╚██╔╝      ████████╗    ██╔═══╝  ██║
██████╔╝██║  ██║   ██║       ╚██╔═██╔╝    ███████╗ ██║
╚═════╝ ╚═╝  ╚═╝   ╚═╝        ╚═╝ ╚═╝     ╚══════╝ ╚═╝

*/
#include <iostream>
#include <string>
#include <algorithm>
#include <map>
#include <set>
#include <vector>
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
bool isSubsequence(string curr, string s) {
    if(curr.size()==0)
        return true;
    int pos = 1;
    int i = s.find(curr[0]);
    if (i == -1)
        return false;
    while (pos < curr.length()) {
        i = s.find(curr[pos], i + 1);
        if (i == -1)
            return false;
        pos++;
    }
    return true;
}
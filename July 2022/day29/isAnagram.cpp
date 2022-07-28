//
// Created by Hady Ahmed on 7/28/2022.
//
/*
██████╗  █████╗ ██╗   ██╗     ██╗ ██╗ ██████╗  █████╗
██╔══██╗██╔══██╗╚██╗ ██╔╝    ████████╗╚════██╗██╔══██╗
██║  ██║███████║ ╚████╔╝     ╚██╔═██╔╝ █████╔╝╚██████║
██║  ██║██╔══██║  ╚██╔╝      ████████╗██╔═══╝  ╚═══██║
██████╔╝██║  ██║   ██║       ╚██╔═██╔╝███████╗ █████╔╝
╚═════╝ ╚═╝  ╚═╝   ╚═╝        ╚═╝ ╚═╝ ╚══════╝ ╚════╝

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
bool isAnagram(string s, string t) {
    sort(s.begin(),s.end());
    sort(t.begin(),t.end());
    if(s==t)
        return true;
    else
        return false;

}

//int main(){
//    improve
//
//    END
//    return 0;
//}

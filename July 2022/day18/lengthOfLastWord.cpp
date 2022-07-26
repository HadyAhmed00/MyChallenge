//
// Created by Hady Ahmed on 7/16/2022.
//
/*
██████╗  █████╗ ██╗   ██╗     ██╗ ██╗  ██╗ █████╗
██╔══██╗██╔══██╗╚██╗ ██╔╝    ████████╗███║██╔══██╗
██║  ██║███████║ ╚████╔╝     ╚██╔═██╔╝╚██║╚█████╔╝
██║  ██║██╔══██║  ╚██╔╝      ████████╗ ██║██╔══██╗
██████╔╝██║  ██║   ██║       ╚██╔═██╔╝ ██║╚█████╔╝
╚═════╝ ╚═╝  ╚═╝   ╚═╝        ╚═╝ ╚═╝  ╚═╝ ╚════╝

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

int lengthOfLastWord(string s) {

    int c =0;
    int a = s.size()-1;
    while (s[a]==' ')
    {
        s.erase(a);
        a--;
    }
    for (int i = s.size()-1; i >=0; --i) {

        if(s[i]!=' ')
            c++;
        else
            break;

    }
    return c;
}
//int main(){
//
//    improve
//    lengthOfLastWord(
//            "luffy is still joyboy");
//    END
//    return 0;
//}

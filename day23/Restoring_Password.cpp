//
// Created by Hady Ahmed on 7/22/2022.
//
/*
██████╗  █████╗ ██╗   ██╗     ██╗ ██╗ ██████╗ ██████╗
██╔══██╗██╔══██╗╚██╗ ██╔╝    ████████╗╚════██╗╚════██╗
██║  ██║███████║ ╚████╔╝     ╚██╔═██╔╝ █████╔╝ █████╔╝
██║  ██║██╔══██║  ╚██╔╝      ████████╗██╔═══╝  ╚═══██╗
██████╔╝██║  ██║   ██║       ╚██╔═██╔╝███████╗██████╔╝
╚═════╝ ╚═╝  ╚═╝   ╚═╝        ╚═╝ ╚═╝ ╚══════╝╚═════╝

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
void Restoring_Password(){

    map<string ,char> lookUp;
    string s ;cin>>s;
    for (int i = 0; i < 10; ++i) {
        string a;cin>>a;
        lookUp.insert({a,i+'0'});
    }
    string res="";

    int c =0;
    for (int i = 0; i < 8; ++i) {
        string tmp = s.substr(i*10,10);
        res+=lookUp[tmp];
    }
    cout<<res;
}
//
//int main(){
//
//    improve
//
//    Restoring_Password();
//    END
//    return 0;
//}

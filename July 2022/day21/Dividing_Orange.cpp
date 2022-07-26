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

void Dividing_Orange(){
    int n ,k ;
    cin>>n>>k;
    vector<vector<int>> res ;
    map<int,bool> lookup;
    for (int i = 0; i < k; ++i) {
        vector<int>tmp;
        int a ;cin>>a;
        tmp.push_back(a);
        res.push_back(tmp);
        lookup.insert({a, false});
    }
    int c = 0;
    for (int i = 1; i <= n*k ;) {
        while(res[c].size()!=n) {
            if(lookup.find(i)==lookup.end()){
                res[c].push_back(i);
            }
            i++;
        }
        c++;
        if(c==res.size()){
            break;
        }
    }
    for(auto it:res){
        for(auto a : it){
            cout<<a<<" ";
        }
        cout<<endl;
    }


}
//int main(){
//
//    improve
//    Dividing_Orange();
//    END
//    return 0;
//}

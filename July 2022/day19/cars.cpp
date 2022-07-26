//
// Created by Hady Ahmed on 7/17/2022.
//
/*
██████╗  █████╗ ██╗   ██╗     ██╗ ██╗  ██╗ █████╗
██╔══██╗██╔══██╗╚██╗ ██╔╝    ████████╗███║██╔══██╗
██║  ██║███████║ ╚████╔╝     ╚██╔═██╔╝╚██║╚██████║
██║  ██║██╔══██║  ╚██╔╝      ████████╗ ██║ ╚═══██║
██████╔╝██║  ██║   ██║       ╚██╔═██╔╝ ██║ █████╔╝
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
void Toy_Cars(){
    vector<int> res;
    int n;cin>>n;
    for (int i = 0; i < n; ++i) {
        bool is_good = true;
        for (int j = 0; j < n; ++j) {
            int tmp;
            cin>>tmp;
            if(tmp==1||tmp==3)
            {
                is_good= false;

            }

        }
        if(is_good) res.push_back(i+1);
    }
    cout<<res.size();
    END
    for(auto it: res)
        cout<<it<<" ";


}
//int main(){
//
//    improve
//    Toy_Cars();
//    END
//    return 0;
//}

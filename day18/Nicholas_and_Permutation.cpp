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
#include <vector >
#include <stack>
#include <cmath>
#include <queue>
#include <utility>

#define improve ios_base::sync_with_stdio(false); cin.tie(0), cout.tie(0);
#define all(v) v.begin(), v.end()
#define loop(n) for (int i = 0; i < n; i++)
#define ll long long int
#define modl 1000000007
#define END cout<<endl;
#define reb(i, k, n) for (ll i = k; i < n; i++)
using namespace std;
void Nicholas_and_Permutation(){
    int Min_val=INT_MAX,Min_idx=0;
    int Max_val=INT_MIN,Max_idx=0;
    int n ;cin>>n;
    for (int i = 0; i < n; ++i) {
        int tmp;cin>>tmp;
        if(tmp>Max_val)
        {
            Max_val=tmp;
            Max_idx =i+1;
        }
        if(tmp<Min_val)
        {
            Min_val=tmp;
            Min_idx = i+1;
        }
    }
    int a =abs(min(Min_idx,Max_idx)-n);
    int b = abs( max(Min_idx,Max_idx)-1);
    cout<<max(a,b);

}
//int main(){
//
//    improve
//    Nicholas_and_Permutation();
//    END
//    return 0;
//}

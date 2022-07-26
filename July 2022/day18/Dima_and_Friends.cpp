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

#define improve ios_base::sync_with_stdio(false); cin.tie(0), cout.tie(0);
#define all(v) v.begin(), v.end()
#define loop(n) for (int i = 0; i < n; i++)
#define ll long long int
#define modl 1000000007
#define END cout<<endl;
#define reb(i, k, n) for (ll i = k; i < n; i++)
using namespace std;
void Dima_and_Friends(){
    int n ; cin>>n;
    int total=0;
    for (int i = 0; i < n; ++i) {
        int tmp =0;
        cin>>tmp;
        total+=tmp;
    }
    int res=0;
    for (int i = 1; i <= 5; ++i) {
        if ((total + i) % (n + 1) != 1){
            res += 1;
        }
    }
    cout<<res;
}
//int main(){
//
//    improve
//    Dima_and_Friends();
//    END
//    return 0;
//}

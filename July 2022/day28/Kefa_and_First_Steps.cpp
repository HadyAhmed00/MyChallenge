//
// Created by Hady Ahmed on 7/27/2022.
//
/*
██████╗  █████╗ ██╗   ██╗     ██╗ ██╗ ██████╗  █████╗
██╔══██╗██╔══██╗╚██╗ ██╔╝    ████████╗╚════██╗██╔══██╗
██║  ██║███████║ ╚████╔╝     ╚██╔═██╔╝ █████╔╝╚█████╔╝
██║  ██║██╔══██║  ╚██╔╝      ████████╗██╔═══╝ ██╔══██╗
██████╔╝██║  ██║   ██║       ╚██╔═██╔╝███████╗╚█████╔╝
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
void Kefa_and_First_Steps(){
    vector<int> num;
    int n ;cin>>n;
    for (int i = 0; i < n; ++i) {
        int a ; cin>>a;
        num.push_back(a);
    }
    int res = INT_MIN;
    int c = 0;
    for (int i = 0; i < num.size()-1; ++i){
        if(num[i]<=num[i+1]){
            c++;
        }else{
            res = max(res,c);
            c=0;
        }

    }
    cout<<max(res,c)+1;
}

//
//int main(){
//    improve
//    Kefa_and_First_Steps();
//    END
//    return 0;
//}

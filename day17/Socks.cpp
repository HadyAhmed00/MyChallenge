//
// Created by Hady Ahmed on 7/15/2022.
//
/*
██████╗  █████╗ ██╗   ██╗     ██╗ ██╗  ██╗███████╗
██╔══██╗██╔══██╗╚██╗ ██╔╝    ████████╗███║╚════██║
██║  ██║███████║ ╚████╔╝     ╚██╔═██╔╝╚██║   ██╔╝
██║  ██║██╔══██║  ╚██╔╝      ████████╗ ██║  ██╔╝
██████╔╝██║  ██║   ██║       ╚██╔═██╔╝ ██║  ██║
╚═════╝ ╚═╝  ╚═╝   ╚═╝        ╚═╝ ╚═╝  ╚═╝  ╚═╝
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
#define improve ios_base::sync_with_stdio(false); cin.tie(0), cout.tie(0);
#define all(v) v.begin(), v.end()
#define loop(n) for (int i = 0; i < n; i++)
#define ll long long int
#define modl 1000000007
#define END cout<<endl;
#define reb(i, k, n) for (ll i = k; i < n; i++)
using namespace std;
void Vasya_and_Socks(){
    int a,b;
    cin>>a>>b;
    if(a<b){cout<<a;
        return;
    }
    if(a==b) {
        cout << a + 1;
        return;
    }
    int ans = a;
    int couter= a/b;
    while (couter--){
        ans++;
        if(ans%b==0)ans++;
    }
    cout<< ans;
}
//
//int main(){
//
//    improve
//    Vasya_and_Socks();
//    END
//    return 0;
//}

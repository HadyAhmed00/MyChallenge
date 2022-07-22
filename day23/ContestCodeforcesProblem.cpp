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

void Contest(){
    double a,b,c,d,ans1,ans2;
    cin>>a>>b>>c>>d;
    ans1 = (3.0*a)/10.0;
    ans2 =a- ((a/250.0)*c);
    double misha = max(ans1,ans2);
    ans1 = (3.0*b)/10.0;
    ans2 = b- ((b/250.0)*d);
    double vasia = max(ans1,ans2);
    if(misha==vasia)
        cout<<"Tie";
    else{
        misha>vasia?cout<<"Misha":cout<<"Vasya";
    }
}
//int main(){
//
//    improve
//    Contest();
//    END
//    return 0;
//}

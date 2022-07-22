//
// Created by Hady Ahmed on 7/21/2022.
//
/*
██████╗  █████╗ ██╗   ██╗     ██╗ ██╗ ██████╗ ██████╗
██╔══██╗██╔══██╗╚██╗ ██╔╝    ████████╗╚════██╗╚════██╗
██║  ██║███████║ ╚████╔╝     ╚██╔═██╔╝ █████╔╝ █████╔╝
██║  ██║██╔══██║  ╚██╔╝      ████████╗██╔═══╝ ██╔═══╝
██████╔╝██║  ██║   ██║       ╚██╔═██╔╝███████╗███████╗
╚═════╝ ╚═╝  ╚═╝   ╚═╝        ╚═╝ ╚═╝ ╚══════╝╚══════╝
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

void System_of_Equations(){
    int n,m ;cin>>n>>m;
    int c =0;
    for (int i = 0; i <= max(n, m); ++i) {
        for (int j = 0; j <= max(n, m); ++j) {
            int a = (i*i)+j;
            int b = i+(j*j);
            if(a==n&&b==m){
                c++;
            }
        }
    }
    cout<<c;
}

//
//int main(){
//
//    improve
//    System_of_Equations();
//    END
//    return 0;
//}

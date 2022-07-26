//
// Created by Hady Ahmed on 7/24/2022.
//
/*
██████╗  █████╗ ██╗   ██╗     ██╗ ██╗ ██████╗ ███████╗
██╔══██╗██╔══██╗╚██╗ ██╔╝    ████████╗╚════██╗██╔════╝
██║  ██║███████║ ╚████╔╝     ╚██╔═██╔╝ █████╔╝███████╗
██║  ██║██╔══██║  ╚██╔╝      ████████╗██╔═══╝ ╚════██║
██████╔╝██║  ██║   ██║       ╚██╔═██╔╝███████╗███████║
╚═════╝ ╚═╝  ╚═╝   ╚═╝        ╚═╝ ╚═╝ ╚══════╝╚══════╝

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


void Little_Elephant_and_Function(){
    int n ;cin>>n;
    if(n==1){
        cout<<1;
        return;
    }
    cout<<n<<" ";
    for (int i = 1; i <= n - 1; ++i) {
        cout<<i<<" ";
    }
}


//int main(){
//
//    improve
//    Little_Elephant_and_Function();
//    END
//    return 0;
//}

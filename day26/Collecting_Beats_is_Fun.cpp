//
// Created by Hady Ahmed on 7/25/2022.
//
/*
██╗  ██╗ █████╗ ██████╗ ██╗   ██╗
██║  ██║██╔══██╗██╔══██╗╚██╗ ██╔╝
███████║███████║██║  ██║ ╚████╔╝
██╔══██║██╔══██║██║  ██║  ╚██╔╝
██║  ██║██║  ██║██████╔╝   ██║
╚═╝  ╚═╝╚═╝  ╚═╝╚═════╝    ╚═╝
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

void Collecting_Beats_is_Fun(){
    int k ;cin>>k;
    map <char,int> lookUp;
    for (int i = 0; i < 16; ++i) {
        char a ;cin>>a;
        if(a !='.')
        {
            if(lookUp.find(a)==lookUp.end())
                lookUp.insert({a,1});
            else
                lookUp[a]++;
        }
        if(lookUp[a]>2*k){
            cout<<"NO";
            return;
        }

    }
    cout<<"YES";

}
//
//int main(){
//
//    improve
//    Collecting_Beats_is_Fun();
//    END
//    return 0;
//}

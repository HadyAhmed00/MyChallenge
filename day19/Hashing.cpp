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

void hashing(){
    int p,n;cin>>p>>n;
    map<int,int> mp;
    for (int i = 0; i < n; ++i) {
        int input,key;
        cin>>input;
        key  = input%p;
        if(mp.find(key)== mp.end())
        {
            mp.insert({key,input});
        }
        else{
            cout<<i+1;
            return ;
        }

    }
    cout<<-1;
}
/*

int main(){

    improve
    hashing();
    END
    return 0;
}
*/

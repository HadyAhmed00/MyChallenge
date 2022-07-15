//
// Created by Hady Ahmed on 6/30/2022.
//
/*
██████╗  █████╗ ██╗   ██╗    ██████╗
██╔══██╗██╔══██╗╚██╗ ██╔╝    ╚════██╗
██║  ██║███████║ ╚████╔╝      █████╔╝
██║  ██║██╔══██║  ╚██╔╝      ██╔═══╝
██████╔╝██║  ██║   ██║       ███████╗
╚═════╝ ╚═╝  ╚═╝   ╚═╝       ╚══════╝

 */

#include <iostream>
#include <string>
#include <algorithm>
#include <map>
#include <set>
#include <vector >
#define ll long long
using namespace std;
void Promo(){
    int itmem,quers;
    cin>>itmem>>quers;
    vector<ll> pice;
    for (int i = 0; i < itmem; ++i) {
        int tmp ;
        cin>>tmp;
        pice.push_back(tmp);
    }
    sort(pice.begin(),pice.end(),greater<int>());

    vector<ll> prifex(itmem+1  );
    prifex[0]=0;
    for (int i = 0; i < itmem; ++i) {
        prifex[i+1]= prifex[i]+pice[i];
    }
    while (quers--)
    {
        int x, y;
        cin>>x>>y;
        cout<<prifex[x]-prifex[x-y]<<endl;
    }

}

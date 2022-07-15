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
#include <set>
#include <vector>
#include <algorithm>
using namespace std;

void Second_Order(){

    int n;
    cin>>n;
    set<int> s;


    for (int i = 0; i < n; ++i) {
        int a ;
        cin>>a;
        s.insert(a);
    }
    if(s.size()==1)
    {
        cout<<"NO";
        return;
    }
    vector<int> vec;
    for(auto it :s)
    {
        vec.push_back(it)   ;
    }

    sort(vec.begin(),vec.end());

    cout<<vec[1];


}
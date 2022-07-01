//
// Created by Hady Ahmed on 7/1/2022.
//
#include <iostream>
#include <string>
#include <algorithm>
#include <map>
#include <set>
#include <vector >
#define ll long long
using namespace std;

//Bus to Udayland contest/711/problem/A

void bus(){
    int n;
    cin>>n;
    string sets[1000];

    bool found =false;
    for (int i = 0; i < n; ++i) {
        cin>>sets[i];
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < sets[i].size()-1; ++j) {
            if(sets[i][j]=='O'&&sets[i][j+1]=='O'&&!found)
            {
                sets[i][j] = '+';
                sets[i][j+1] = '+';
                found= true;
            }

        }
    }


    if(found)

    {
        cout<<"YES\n";
        for(int i = 0; i<n;i++){
            cout<<sets[i]<<endl;
        }
    }
    else
        cout<<"NO\n";
}